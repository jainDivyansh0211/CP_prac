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
    int e=0;
    int o=0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]%2) o+=1;
        else e+=1;
    }
    if(n==1) cout<<e<<endl;
    else{
        if(e && o){
            cout<<1+o<<endl;
        }
        else if(e==0) cout<<o-1<<endl;
        else if(o==0) cout<<1<<endl;
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