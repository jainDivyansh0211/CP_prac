#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
             
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res=((a+b+c)%3==0);
    if(res) {
        int t=(a+b+c)/3;
        if(a<=t && b<=t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
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