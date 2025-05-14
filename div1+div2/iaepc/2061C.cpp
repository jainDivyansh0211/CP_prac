#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define max_n 200005
#define MOD 998244353

int n;
vector<int> arr;
int dp[max_n][2];

int recur(int i, int last, int cnt)
{
    if (i == n)
        return 1;

    if (dp[i][last] != -1)
        return dp[i][last];

    int ans = 0;
    if (arr[i] == cnt)
    {
        // Both liar and honest possible
        if (last)
        {
            //only truth
            ans = (ans + recur(i + 1, 0, cnt)) % MOD;
        }
        else
        {
            //both Liar and truth
            ans = (ans + recur(i + 1, 0, cnt)) % MOD;
            ans = (ans + recur(i + 1, 1, cnt + 1)) % MOD;
        }
    }
    else
    {
        if (last == 0)
        {
            ans = (ans + recur(i + 1, 1, cnt + 1)) % MOD;
        }
    }

    return dp[i][last] = ans;
}

void solve()
{
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dp[i][0] = -1;
        dp[i][1] = -1;
    }
    cout << recur(0, 0, 0) << endl;
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
