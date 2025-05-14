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
    int cnt_cntinous_seg=0;
    int total_zero=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            total_zero++;
            int j=i+1;
            while(arr[j]==0 && (j<n)){
                total_zero++;
                j++;
            }
            cnt_cntinous_seg++;
            j-=1;
            i=j;
        }
    }
    if(total_zero==n){
        cout<<0<<endl;
    }
    else if(total_zero==0){
        cout<<1<<endl;
    }
    else{
        if(cnt_cntinous_seg>2) cout<<2<<endl;
        else if(cnt_cntinous_seg==1){
            if(arr[0]==0 || arr[n-1]==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else if(cnt_cntinous_seg==2){
            if(arr[0]==0 && arr[n-1]==0){
                cout<<1<<endl;
            }
            else cout<<2<<endl;
        }
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