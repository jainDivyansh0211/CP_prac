#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

int dp[100003][2];

int n;
vector<int> arr;

int rec(int level,int prev_taken){ //best till level
    if(level<0) return 0;
    if(dp[level][prev_taken]!=-1) return dp[level][prev_taken];
    int ans;
    if(prev_taken){
        ans=rec(level-1,0);
    }
    else{
        //take
        ans=(arr[level]+rec(level-1,1));
        //not take
        ans=max(ans,rec(level-1,0));
    }
    return dp[level][prev_taken]=ans;
}

void solve()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    arr.clear();
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<rec(n-1,0)<<endl;
    
 
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
