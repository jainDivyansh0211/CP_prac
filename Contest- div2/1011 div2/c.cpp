#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<-1<<endl;
        return;         
    }

    //max(x,y)+k -> 2^ SOMETHING
    //solution reduced to (x+k)&(y+k)=0
    else
    {
        int r=max(x,y);
        int e=(floor(log2(r))+1);
        cout<<((1<<e)-r)<<endl;
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
