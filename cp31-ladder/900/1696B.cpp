#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int ans;
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt_zero_seq=0;
    int cnt_zero_total=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt_zero_total+=1;
            while(arr[i+1]==0){
                cnt_zero_total+=1;
                i++;
            }
            cnt_zero_seq+=1;
        }
    }
    if(cnt_zero_total==n){
        ans=0;
    }
    else if(cnt_zero_seq==1 && (arr[0]==0 || arr[n-1]==0)) ans=1;
    else if(cnt_zero_seq==2 && (arr[0]==0 && arr[n-1]==0)) ans=1;
    else if(cnt_zero_total==0) ans=1;
    else ans=2;
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