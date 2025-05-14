#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

bool comp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map <int,int> mp;
    mp[0]=0;
    vector <pair<int,int>> v;
    int prefix=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        prefix+=arr[i];
        if(mp.count(prefix)!=0){
            // if(mp[prefix]-i <= 1){

            // }
            v.push_back(make_pair(mp[prefix],i));
        }
        mp[prefix]=i+1;
    }
    sort(v.begin(),v.end(),comp);
    int cnt=0;
    int rend=-1;
    for(int i=0;i<v.size();i++)
    {
        auto it=v[i];
        if(it.first>rend){
            cnt+=1;
            rend=it.second;
        }
        
    }
    cout<<cnt<<endl;
}

signed main()
{
    // fast IO
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cases = 1;
    cin >> cases;
    while (cases--)
        solve();
}