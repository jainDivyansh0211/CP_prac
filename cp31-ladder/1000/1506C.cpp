#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
string s1, s2;

int traverse(int i,int j){
    int flag=1;
    int cnt=0;
    while(flag && i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]) cnt++;
        else flag=0;
        i++;
        j++;
    }
    return cnt;
}
             
void solve()
{
    cin>>s1>>s2;
    int ans=s1.size()+s2.size();
    int matched=0;
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++)
        {
            if(s1[i]==s2[j]){
                matched=1;
                int k=traverse(i,j);
                int a=(s1.size()-k + s2.size()-k);
                ans=min(a,ans);
            }
        }
    }
    cout<<ans<<endl;
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