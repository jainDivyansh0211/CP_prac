#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    string a, b;
    cin >> a >> b;
    int l = max(a.size(), b.size());
    while (a.size() != l)
    {
        a = "0" + a;
    }
    while (b.size() != l)
    {
        b = "0" + b;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;
    string c = "";
    int ci = 0;
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        int ai = a[i] - '0';
        int bi = b[i] - '0';
        c += ('0' + (ci ^ (ai ^ bi)));
        ci = ((ai & bi) | (ci & bi) | (ci & ai));
        // cout<<"c till now: "<<c<<endl;
        // cout<<"ci is :"<<ci<<endl;
    }
    int st = min(a.size(), b.size());
    if (ci > 0)
        c += '1';
    reverse(c.begin(), c.end());
    cout << c << endl;
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