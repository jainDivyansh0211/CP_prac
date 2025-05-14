#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define int long long
#define endl '\n'

void solve()
{
    int k;
    cin >> k;
    long double r = (sqrtl(4.0L * k + 1) - 1) / 2;
    cout << k + (int)ceill(r) << endl;
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