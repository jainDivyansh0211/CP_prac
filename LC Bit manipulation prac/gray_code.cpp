#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
             
void solve()
{
    int n;
    cin>>n;
    vector <int> res;
    for(int i=0;i<(1<<n);i++){
        int x=0;
        for(int j=0;j<n;j++){
            if(j==(n-1)){
                x+=(i&(1<<j));
            }
            else{
                int a1 = (i & (1 << j))>>j;
                int a2 = (i & (1 << (j + 1)))>>(j+1);
                x += ((a1 ^a2)<<j);
            }
        }
        res.push_back(x);
    }
    for(auto x: res){
        cout<<x<<" ";
    }
    cout<<endl;
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