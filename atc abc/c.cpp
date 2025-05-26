#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>


void solve()
{
    int n;
    cin>>n;
    vector<pii> v(n+1);
    vi d(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>d[i];
    }
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        v[i]={a,b};
    }
    vi hmax(n+1);
    vi hmin(n+1);
    hmax[0]=0;
    hmin[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(d[i]!=-1){
            hmax[i]=hmax[i-1];
            hmin[i]=hmin[i-1];
            hmax[i]+=(d[i]==1);
            hmin[i]+=(d[i]==1);
        }
        else{
            hmax[i]=hmax[i-1]+1;
            hmin[i]=hmin[i-1];
        }
        hmin[i]=max(hmin[i],v[i].first);
        hmax[i]=min(hmax[i],v[i].second);
        if(hmax[i]<hmin[i]){
            cout<<-1<<endl;
            return;
        }
    }
    vi h(n+1);
    h[n]=hmin[n];
    for(int i=n;i>0;i--){
        if(d[i]==1){
            h[i-1]=h[i]-1;
        }
        else if(d[i]==0){
            h[i-1]=h[i];
        }
        else{
            //check for 0
            if(hmin[i-1]<=h[i] && hmax[i-1]>=h[i]){
                d[i]=0;
                h[i-1]=h[i];
            }
            else{
                d[i]=1;
                h[i-1]=h[i]-1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
