#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
             
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int p=1;
    int target=1;
    int ans=2;
    vector <int> b;
    for(int i=0;i<n;i++) cin>>arr[i];
    if(n==k){
        ans=(n/2)+1;
        for(int i=1;i<n;i+=2){
            if(arr[i]!=((i/2)+1)){
                ans=(i/2)+1;
                break;
            }
        }
    }
    else{
    for(int i=1;i<=(n-k+1);i++){
        if(arr[i]!=1){
            ans=1;
            break;
        }
    }
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