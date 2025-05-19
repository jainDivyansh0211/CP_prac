#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    priority_queue<int> pq;
    for(auto x:mp){
        pq.push(x.second);
    }
    for(int i=0;i<m;i++){
        int t=pq.top();
        pq.pop();
        pq.push(t-1);
    }
    int su=0;
    while(!pq.empty()){
        int w=pq.top();
        su+=(w*w);
        pq.pop();
    }
    cout<<su<<endl;

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
