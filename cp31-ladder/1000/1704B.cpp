#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,x;
    cin>>n>>x;
    int r[2];
    int y;
    cin>>y;
    int cnt=0;
    r[0]=y-x;
    r[1]=y+x;
    for(int i=1;i<n;i++){
        int p;
        cin>>p;
        r[0]=max(r[0],p-x);
        r[1]=min(r[1],p+x);
        if(r[1]<r[0]) {
            cnt++;
            r[0]=p-x;
            r[1]=p+x;
        }
    }
    cout<<cnt<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}