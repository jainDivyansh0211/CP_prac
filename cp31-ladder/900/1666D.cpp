#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    string s,b;
    cin>>s>>b;
    int s_size=s.size();
    int b_size=b.size();
    int p=(b_size-1);
    
    /*Steps-
        Iterate from back of main string
        Check if any of the starting letters appear - if yes then return 0
        If the characters match the last pointed character then decrement the pointer
        then check the unique count of these characters
    */

    int flag=1;
    int dis_match=0;
    for(int i=(s_size-1);i>=0;i--){
        for(int j=0;j<=p;j++){
            if(s[i]==b[j]){
                if(b[j] != b[p]) flag=0;
                else{
                    dis_match+=1;
                    p--;
                    break;
                }
            }
        }
        if(!flag) break;
    }
    if(flag && (dis_match==b_size)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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