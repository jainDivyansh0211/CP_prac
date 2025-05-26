#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int x,y;
    cin>>x>>y;
    vector<pair<int,int>> v;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            v.push_back({i,j});
        }
    }
    int c=0;
    for(auto p:v){
        int a=p.first;
        int b=p.second;
        if(((a+b)>=x) || (abs(a-b)>=y)) c++;
    }
    cout.precision(12);
    cout<<(double)c/36.0<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
