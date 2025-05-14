#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,m;
    cin>>n>>m;
    int s=0;
    int negs=0;
    int min_elem=INT_MAX;
    int zeros=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            min_elem=min(min_elem,abs(x));
            s+=abs(x);
            if(x<0) negs+=1;
            else if(x==0) zeros++;
        }
    }
    if((negs%2==0) || zeros) cout<<s<<endl;
    else cout<<s-2*min_elem<<endl;
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