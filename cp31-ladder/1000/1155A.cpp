#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=-1;
    int r=-1;
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            l=i+1;
            r=l+1;
            break;
        }
    }
    if(l==-1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    //code here
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}