#!/usr/bin/env python3
import sys
import numpy as np
import pandas as pd

def inp():
    data = sys.stdin.read().split()
    p_id = data[0]
    unhedged_PL = np.array(data[1:], dtype=np.float64)
    return p_id, unhedged_PL

def compute_var95(x):
    return np.percentile(x, 5)

def main():
    # Read the portfolio P&L from stdin
    portfolio_id, unhedged_PL = inp()
    T = unhedged_PL.size

    # Load returns CSV once, keep both DataFrame and its NumPy array
    returns_df = pd.read_csv("stocks_returns.csv", index_col=0)
    stock_ids  = returns_df.columns.tolist()
    returns    = returns_df.to_numpy() / 100.0

    # Load metadata and set its index so lookups work
    meta  = pd.read_csv("stocks_metadata.csv").set_index("stock_id")
    costs = meta["capital_cost"]

    # Baseline VaR for the unhedged book
    baseline_var95 = compute_var95(unhedged_PL)

    # Compute correlation scores corr(-P, r_i)
    N = returns.shape[1]
    corr_scores = np.array([
        np.corrcoef(-unhedged_PL, returns[:, i])[0,1]
        for i in range(N)
    ])
    corr_scores = np.nan_to_num(corr_scores)

    # Select top-k hedgers
    k = 20
    top_idx = np.argsort(-corr_scores)[:k]
    chosen  = [stock_ids[i] for i in top_idx]
    R       = returns[:, top_idx]

    # Solve least-squares R * h = -P, then round to integers
    h_raw, *_ = np.linalg.lstsq(R, -unhedged_PL, rcond=None)
    h         = np.round(h_raw).astype(int)

    # Compute hedged P&L, new VaR, and total cost
    P_hedged       = unhedged_PL + R.dot(h)
    hedged_var95   = compute_var95(P_hedged)
    position_costs = costs.loc[chosen].to_numpy()
    total_cost     = np.sum(np.abs(h) * position_costs)

    # Print diagnostics and final nonzero positions
    print(f"# Portfolio: {portfolio_id}")
    print(f"# Baseline VaR95: {baseline_var95:.2f}")
    print(f"# Hedged   VaR95: {hedged_var95:.2f}")
    print(f"# Total Hedging Cost: {total_cost:.2f}")
    print()
    for stock, qty in zip(chosen, h):
        if qty != 0:
            print(f"{stock} {qty}")

if __name__ == "__main__":
    main()
