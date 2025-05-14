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
    int cnt=0;
    int v=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(') v++;
        else v--;
        if(v<0) {
            cnt++;
            v=0;
        }
    }
    cout<<cnt<<endl;
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