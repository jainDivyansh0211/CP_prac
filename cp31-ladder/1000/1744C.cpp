#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    int ans=0;
    int cnt=0;
    if(c=='g') cout<<0<<endl;
    else{
        for(int i=0;i<n;i++){
            if(s[i]==c){
                while(s[i]!='g' && i<n){
                    i++;
                    cnt++;
                }
                while(s[i]=='g'){
                    i++;
                    cnt++;
                }
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        cout << ans << endl;
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