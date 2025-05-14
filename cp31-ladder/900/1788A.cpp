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
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt_2_left=0;
    int cnt_2_right = 0;
    int prefix_left[n];
    int prefix_right[n];
    for(int i=0;i<n;i++){
        if(arr[i]==2){
            cnt_2_left++;
        }
        if(arr[n-i-1]==2){
            cnt_2_right++;
        }
        prefix_left[i]=cnt_2_left;
        prefix_right[n-i-1]=cnt_2_right;
    }
    int ans=-1;
    for(int i=0;i<n-1;i++){
        if(prefix_left[i]==prefix_right[i+1]){
            ans=i+1;
            break;
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