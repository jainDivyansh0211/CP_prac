#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
             
void solve()
{
    int divisor,dividend;
    cin>>dividend>>divisor;
    divisor=abs(divisor);
    dividend=abs(dividend);
    bitset <32> d,D;
    d=divisor;
    D=dividend;
    int msbd,msbD;
    int f1=1,f2=1;
    for(int i=32;i>=0;i--){
        if(d[i] && f1){
            msbd=i;
            f1=0;
        }
        if (D[i] && f2)
        {
            msbD = i;
            f2 = 0;
        }
    }
    int x=0;
    int ans=0;
    int ld=msbd+1;
   // cout<<"length of divisor : "<<ld<<endl;
    for(int i=msbD;i>=0;i--){
        if((msbD-i)>=ld){
          //  cout<<"x is : "<<x<<endl;
            ans= ans*2 + (x>=divisor);
            x=(x-((x>=divisor)*divisor));
            x=(x<<1)+D[i];
           // cout<<"new x : "<<x<<endl;
        }
        else{
            x=(x<<1)+(D[i]);
        }
    }
    if(x>=divisor){
        ans= ans*2 + 1;
    }
    else{
        ans= ans*2;
    }
    if(divisor<0) ans*=(-1);
    if(dividend<0) ans*=(-1);
    cout<<ans<<endl;


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