#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        if(s[i]=='A') a.push_back(i+1);
        else b.push_back(i+1);
    }
    // for(auto v:a){
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    // for(auto x:b){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    int c=0;
    for(int i=0;i<a.size();i++){
        //play a[i]
        int w=1; //w=1 -> alice wins with this card
        for(int j=0;j<b.size();j++){
            if(a[i]==1 && b[j]==n){
                w=1;
            }
            else if(a[i]==n && b[j]==1) {
                w=0;
                break;
            }
            else if(b[j]>a[i]){
                w=0;
                break;
            } 
        }
        if(w){
            c=1;
            break;
        }
    }
    if(c) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
    
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