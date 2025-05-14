#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<vi> res;
    for (int i = 0; i < (1 << n); i++)
    {
        vi pans;
        for (int j = 0; j < n; j++)
        {
            if (i && (1 << j))
                pans.push_back(v[j]);
        }
        res.insert(pans);
        pans.clear();
    }
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