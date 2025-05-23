#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>


//BANBANBANBAN

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    if(n==1) v.push_back({1,2});
    else{
        int x=2;
        int y=3*n;
        while(x<y){
            v.push_back({x,y});
            x+=3;
            y-=3;

        }
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
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
