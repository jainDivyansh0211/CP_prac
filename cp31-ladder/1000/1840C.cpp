#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int ans=0;
    
    int t=0;
    int h=-1;
    
    while(t<n){
        while(h+1 <n && (arr[h+1]<=q)) h++;
        //cout<<"t is "<<t<<" h is "<<h<<endl;
        if(h-t+1 >= k){
            int a=(h-t+1)-(k-1);
            ans += (a*(a+1))/2;
        }
        //cout<<"ans "<<ans<<endl;

        if(h<=t){
            h=t;
            t++;
        }
        else{
            t=h+1;            
        }
    }
    cout<<ans<<endl;
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