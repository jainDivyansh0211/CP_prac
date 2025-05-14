#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int w,h;
    cin>>w>>h;
    int ans=0;
    int t;
    for(int i=0;i<4;i++){
        int k;
        cin>>k;
        int p[k];
        for(int j=0;j<k;j++){
            cin>>p[j];
        }
        if(i<2){
            t=(p[k-1]-p[0])*h;
        }
        else{
            t=(p[k-1]-p[0])*w;
        }
        ans=max(ans,t);
    }
    cout<<ans<<endl;
    //code here
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