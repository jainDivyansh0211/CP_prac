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
    map <int,int> rem;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int r=arr[i]%k;
        rem[r]++;
    }
    if(rem[0]) cout<<0<<endl;
    else{
        if(k==2) cout<<1<<endl;
        else if(k==3){
            if(rem[2]) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else if(k==5){
            for(int i=4;i>0;i--){
                if(rem[i]) {
                    cout<<(5-i)<<endl;
                    break;
                }
            }
        }
        else{
            if(rem[2]>=2) cout<<0<<endl;
            else if(rem[3]) cout<<1<<endl;
            else if(rem[2]){
                if(rem[1]) cout<<1<<endl;
            }
            else cout<<2<<endl;
        }
    }
    
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