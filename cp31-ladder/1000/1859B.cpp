#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int r=0;
    int gmin=INT_MAX;
    map <int,multiset<int>> mp;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            mp[i].insert(x);
            if(gmin>x) {
                gmin=x;
                r=i;
            }
        }
    }
    cout<<"MIN ELEM IN ROW : "<<r<<endl;
    int sum=0;
    sum+=(gmin);
    for(auto v:mp){
        cout<<(v.first)<<endl;
        for(auto x:v.second) cout<<x<<" ";
        cout<<endl;
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