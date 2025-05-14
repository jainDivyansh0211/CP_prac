#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'

int pow_2(int x){
    int ans=1;
    for(int i=0;i<x;i++) ans*=2;
    return ans;
}
             
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) cnt1++;
        else if(arr[i]==0) cnt0++;
    }
    if(cnt1==0) cout<<0<<endl;
    else{
        int ans=(cnt1*(pow_2(cnt0)));
        cout<<ans<<endl;
    }
    //code here
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