#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int maxa[n+1];
    int presum[n+1];
    presum[0]=0;
    maxa[0]=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        presum[i+1]=presum[i]+arr[i];
        maxa[i+1]=max(arr[i],maxa[i]);
    }
    for(int i=1;i<=n;i++){
        cout<<(presum[n]-presum[n+1-i]) +(maxa[n+1-i])<<" ";
    }
    cout<<endl;
    //cpy is the copy
    
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