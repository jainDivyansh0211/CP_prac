#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    priority_queue <pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push(make_pair(x,i));
    }
    int ans[n+1];
    ans[0]=0;
    int f=1;
    int cnt=0;
    int val=0;
    while(v.size()){
        pair <int,int> p;
        p=v.top();
        ans[p.second+1]=f;
        val +=(p.first*2*abs(f));
        cnt++;
        f*=(-1);
        if(cnt%2==0) f+=1;
        v.pop();
    }
    cout<<val<<endl;
    for(int i=0;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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