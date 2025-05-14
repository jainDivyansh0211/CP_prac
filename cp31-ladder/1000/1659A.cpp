#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,r,b;
    cin>>n>>r>>b;
    string s="";
    int k=(r/(b+1));
    int m=(r%(b+1));
    int a[b+1];
    for(int i=0;i<b+1;i++){
        if(m) {
            a[i]=k+1;
            m--;
        }
        else a[i]=k;
    }
    for(int i=0;i<b+1;i++){
        for(int j=0;j<a[i];j++){
            s+='R';
        }
        s+='B';
    }
    s.pop_back();
    cout<<s<<endl;

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