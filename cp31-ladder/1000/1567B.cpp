#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int a,b;
    cin>>a>>b;
    int k=0;
    int ans=0;
    int val[]={0,1,1,0};
    if(((a-1)%4)%2){
        k=val[(a-1)%4];
    }
    else{
        k = (a - 1) + val[(a - 1) % 4];
    }
    if(k==b) ans=a;
    else{
        int n=0;
        for(int i=0;i<22;i++){
            int l=(b>>i)&1;
            int m=(k>>i)&1;
            if(l==1) n+=((1<<i)*(!m));
            else n+=((1<<i)*m);
        }
        if(n==a) ans=a+2;
        else ans=a+1;
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