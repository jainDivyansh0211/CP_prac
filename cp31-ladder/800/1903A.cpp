#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k>1){
        cout<<"YES"<<endl;
    }
    else{
        int flag=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) {flag=0; break;}
        }
        if(flag) cout<<"YES"<<endl;
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