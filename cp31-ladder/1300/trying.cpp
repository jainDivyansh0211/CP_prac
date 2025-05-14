#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    // Store frequency of each pair
    map<pii, int> freq;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        freq[{a % x, a % y}]++;
    }

    int cnt = 0;

    for (auto it = freq.begin(); it != freq.end(); ++it)
    {
        int xi = it->first.first;
        int yi = it->first.second;
        int count1 = it->second;

        int tx = (x - xi) % x;

        auto it1=freq.find({tx,yi});

        if (it1 != freq.end())
        {
            //tx=xi case
            if (tx==xi)
            {
                cnt += (count1 * (count1 - 1)) / 2;
            }
            
            //tx>xi case only considered
            else if (xi<tx)
            {
                cnt += (count1 * (it1->second));
            }
        }
    }
    cout << cnt << endl;
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