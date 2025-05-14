#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    //code here
    string arr;
    cin>>arr;
    int n=arr.size();
    int a2[n];
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        a2[i]=(arr[i]-'0')^1;
        if(arr[i]=='1') c1++;
        else c0++;
    }
    // cout<<c0<<" "<<c1<<endl;
    // for(int i=0;i<n;i++) cout<<a2[i]<<" ";
    // cout<<endl;
    if(c0==c1) cout<<0<<endl;
    else if(c0==0 || c1==0) cout<<n<<endl;
    else{
        int c=0;
        for(int i=0;i<n;i++){
            if(a2[i]==1 && c1) c1--;
            else if(a2[i]==0 && c0) c0--;
            else {
                cout<<(n-i)<<endl;
                break;
            }
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