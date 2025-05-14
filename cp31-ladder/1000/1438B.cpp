#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'


void solve()
{
    int n;
    cin>>n;
    int flag=0;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]>=2) flag=1;
    }
    if(flag) cout<<"YES"<<endl;
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