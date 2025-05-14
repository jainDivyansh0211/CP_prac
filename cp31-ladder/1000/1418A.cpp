#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    int m=(k*y)+k;
    int cnt;
    int cur=x;
    m=m-1+(x-2);
    cnt=(m/(x-1));
    cout<<cnt+k<<endl;
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