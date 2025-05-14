#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>arr[i][j];
    }
    int visited[n];
    for(int i=0;i<n;i++) visited[i]=1; 
    int q[n]={0};
    int ans=1;
    for(int i=n-1;i>=0;i--){
        int flag=1;
        for(int j=0;j<n;j++){
            q[j]+=arr[i][j];
            if(q[j]==ans){
                if(flag && visited[j]){
                //cout<<"mached : "<<ans<<endl;
                flag=0;
                visited[j]=0;
                q[j]=0;
                ans++;
                }
            }
        }
        if (flag)
            break;
    }
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