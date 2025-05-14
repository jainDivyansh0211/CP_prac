#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,m;
    cin>>n>>m;
    int x[n];
    int y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int cnt=4*m;
    int a=x[0];
    int b=y[0];
    for(int i=1;i<n;i++){
        cnt+=(4*m-2*(2*m-x[i]-y[i]));
    }
    //code here
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