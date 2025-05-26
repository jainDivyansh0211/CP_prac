#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
const int INF=1e9;

void solve()
{
    int n,m;
    cin>>n>>m;
    vi np(n+1,INF); //nearest element that is not friend
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(a>b) np[b]=min(np[b],a);
        if(b>a) np[a]=min(np[a],b);
    }
    int r=INF;
    int cnt=0;
    for(int i=n;i>0;i--){
        r=min(r,np[i]);
        if(r==INF) cnt+=(1+(n-i));
        else{
            cnt+=(1+(r-(i+1)));
        }
    }
    cout<<cnt<<endl;
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
