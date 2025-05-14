#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int w, b;

int check(int x)
{
    int p = min(w, b);
    int q = max(w, b);
    if (q < x)
        return 0;
    else
    {
        int flag = 1;
        for (int i = x; i > 0; i--)
        {
            if (p >= i)
                p -= i;
            else
                q -= i;
            if (p < 0 || q < 0)
                flag = 0;
        }
        return flag;
    }
}

void solve()
{
    cin >> w >> b;
    int s = 2 * (w + b);
    int ans;
    // n^2 + n <= s

    int hi = floor(sqrt(s));
    for (int i = hi; i >= 0; i--)
    {
        if (check(i))
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
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