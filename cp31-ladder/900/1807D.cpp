#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    int prefix_arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    prefix_arr[0]=0;
    for(int i=0;i<n;i++){
        prefix_arr[i+1]=arr[i]+prefix_arr[i];
    }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int new_total= (prefix_arr[n]-(prefix_arr[r]-prefix_arr[l-1]));
        new_total += (k*(r-l+1));
        if(new_total%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;  
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