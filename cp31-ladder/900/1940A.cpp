#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define int long long
#define endl '\n'
int sx[] = {1, -1, -1, 1};
int sy[] = {1, 1, -1, -1};
int a, b;
int xk, yk;
int xq, yq;

int check(int x, int y)
{
    int xnew1, xnew2, ynew2, ynew1;
    for (int i = 0; i < 4; i++)
    {
        xnew1 = x + (sx[i] * a);
        ynew1 = y + (sy[i] * b);
        xnew2 = x + (sx[i] * b);
        ynew2 = y + (sy[i] * a);
        if (((xnew1 == xq) && (ynew1 == yq)) || ((xnew2 == xq) && (ynew2 == yq)))
        {
            return 1;
            break;
        }
    }
    return 0;
}

void solve()
{
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;
    int x1, x2, y1, y2;
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        x1 = xk + (a * sx[i]);
        y1 = yk + (b * sy[i]);
        x2 = xk + (b * sx[i]);
        y2 = yk + (a * sy[i]);
        if (check(x1, y1)){
            ans += 1;
        }
        if(x1!=x2 || y1!=y2)
        {
            if (check(x2, y2))
            {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    // code here
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