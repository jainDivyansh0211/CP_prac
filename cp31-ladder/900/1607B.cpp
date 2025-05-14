#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define int long long
#define endl '\n'

void solve()
{
    int start, n;
    cin >> start >> n;
    int ans;
    // if even - left
    // else right
    // 0 1 2 3 4 5 6 7 8 9 10 -> 0 -1 1 4 0 -5 1 7 0
    // 1 1 2 3 4 5 6 7 8 9 10 -> 1 2 0 -3 1 6 0
    // for even start
    // n mod 4 = 0 -> back to zero (at start)
    // n mod 4 = 2 -> always at 1 (+1 +start)
    /*n mod 4 = 1 -> negative of that val (-n + start)
    n mod 4= 3 -> (+1+n) from start


    for odd start
    n mod 4 =2 -> -1 from start
    n mod 4= 1 -> (+n) from start
    n mod 4=0 -> at start
    n mod 4=3 -> (-1-n) from start
    */
    // code here
    if (start % 2)
    {
        if (n % 4 == 0)
            ans = start;
        else if (n % 4 == 1)
            ans = start + n;
        else if (n % 4 == 2)
            ans = start - 1;
        else
            ans = start - 1 - n;
    }
    else
    {
        if (n % 4 == 0)
            ans = start;
        else if (n % 4 == 1)
            ans = start - n;
        else if (n % 4 == 2)
            ans = start + 1;
        else
            ans = start + 1 + n;
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