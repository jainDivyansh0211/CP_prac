#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x=min(a,n+1-a);
    int y=min(b,m+1-b);
    int cnt1=(1+ceil(log2(x))+ceil(log2(m)));
    int cnt2=(1+ceil(log2(y))+ceil(log2(n)));
    cout<<min(cnt1,cnt2)<<endl;
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
