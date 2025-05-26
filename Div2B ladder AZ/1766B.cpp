#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int n; cin>>n;
    string s;
    cin>>s;
    map <string,int> r;
    for(int i=0;(i+1)<n;i++){
        char s2[2];
        s2[0]=s[i];
        s2[1]=s[i+1];
        if(r.find(s2)!=r.end() && r[s2]!=(i-1)){
            cout<<"YES"<<endl;
            return;
        }
        if(r.find(s2)==r.end()) r[s2]=i;
        //cout<<"s2 is "<<s2<<endl;
    }
    cout<<"NO"<<endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
