#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    vector <int> arr;
    arr.resize(n);
    vector <pair <int,int>> res;
    for (int i=0;i<n;i++) cin>>arr[i];
    if(n%2==0){
        for(int j=0;j<2;j++){
                res.push_back(make_pair(1,n));
        }
    }
    else{
        res.push_back(make_pair(2,n));
        res.push_back(make_pair(2,n));
        res.push_back(make_pair(1,2));
        res.push_back(make_pair(1, 2));
    }
    cout<<res.size()<<endl;
    for(auto it: res){
        cout<<it.first<<" "<<it.second<<endl;
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