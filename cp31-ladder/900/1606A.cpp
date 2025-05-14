#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    string s;
    cin>>s;
    int ab=0;
    int ba=0;
    for(int i=0;i<s.size();i++){
        if(i){
            if(s[i]=='b' && s[i-1]=='a') ab++;
            else if(s[i]=='a' && s[i-1]=='b') ba++;
        }
    }
    if(ab==ba) cout<<s<<endl;
    else{
        s[0]=s[s.size()-1];
        cout<<s<<endl;
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