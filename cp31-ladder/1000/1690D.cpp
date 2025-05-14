#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    //code here
    int x;
    cin>>x;
    int ans=n;
    string s; cin>>s;
    int cnt=0;
    string sub="";
    for(int i=0;i<n;i++)
    {
        if(i>=x){
            ans=min(ans,cnt);
            if(sub[0]=='W') cnt--;
            sub.erase(sub.begin());
        }
        if(s[i]=='W') cnt++;
        sub+=s[i];
    }
    ans=min(ans,cnt);
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