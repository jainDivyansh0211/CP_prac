#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    vector<int> r1(n), r2(n);
    for (int i = 0; i < n; i++)
        cin >> r1[i];
    for (int i = 0; i < n; i++)
        cin >> r2[i];

    // Create column pairs (sum, index)
    vector<pair<int, int>> columns(n);
    for (int i = 0; i < n; i++)
    {
        columns[i] = {r1[i] + r2[i], i};
    }

    // Sort columns by their sum in descending order
    sort(columns.rbegin(), columns.rend());

    // Rearrange the matrix rows based on sorted columns
    vector<int> sorted_r1(n), sorted_r2(n);
    for (int i = 0; i < n; i++)
    {
        int idx = columns[i].second;
        sorted_r1[i] = r1[idx];
        sorted_r2[i] = r2[idx];
    }

    // Calculate the optimal path cost
    int suffix_r1 = accumulate(sorted_r1.begin(), sorted_r1.end(), 0LL); // Full sum of row 1
    int prefix_r2 = 0;                                                   // Prefix sum for row 2
    int result = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        suffix_r1 -= sorted_r1[i];
        result = min(result, max(suffix_r1, prefix_r2));
        prefix_r2 += sorted_r2[i];
    }

    cout << result << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
