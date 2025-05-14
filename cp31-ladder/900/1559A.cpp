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
    int max_val=0;
    int arr[n];
    int ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        max_val=max(max_val,arr[i]);
    }
    ans=max_val;
    for(int i=0;i<n;i++){
        ans = ans & (arr[i]);
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