#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool comaparator(pair <int,int> &a, pair<int,int> &b){
    if(a.second!=b.second) return a.second>b.second;
    else return a.first<b.first;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector <pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x=x%k;
        if(x==0) x=k;
        v.push_back(make_pair(i+1,x));
    }
    sort(v.begin(),v.end(),comaparator);
    for(auto x:v){
        cout<<x.first<<" ";
    }
    cout<<endl;
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