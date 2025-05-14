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
    vector <int> left;
    vector <int> right;
    left.resize(n);
    right.resize(n);
    set <char> st1;
    set <char> st2;
    for(int i=0;i<n;i++){
        st1.insert(s[i]);
        st2.insert(s[n-1-i]);
        left[i]=st1.size();
        right[n-i-1]=st2.size();
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans=max(ans,left[i]+right[i+1]);
    }
    cout<<ans<<endl;
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