#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int a,b;
    cin>>a>>b;
    double r=a/double(b);
    int res=a/b;
    if(r-(double)res > 0.5){
        res+=1;
    }
    cout<<res<<endl;
 
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
