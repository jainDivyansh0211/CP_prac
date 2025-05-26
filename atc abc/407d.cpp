#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

int dp[22][(1<<20)+1]={-1};
int h,w;
vii grid;


void rec(int r,int c,int in,int out,int val){
    if(c==w){
        dp[r][out]=max(dp[r][out],(dp[r][in]^val));
        return;
    }
    //check
    if(in&&(1LL<<c)!=0){
        //blocked
        rec(r,c+1,in,out,val);
        return;
    }
    else
    {
        //ignore
        rec(r,c+1,in,out,((val)^grid[r][c]));
        //row
        if(c+1<w && (in&&(1<<(c+1)))){
            rec(r,c+2,in,out,val);
        }
        //col
        out = out | (1LL<<(c));
        rec(r,c+1,in,out,val);
        out = out ^ (1LL<<(c));
    }
}

void solve()
{
    dp[1][0]=0;
    cin>>h>>w;
    grid.resize(h);
    for(int i=0;i<h;i++){
        grid[i].resize(w);
        for(int j=0;j<w;j++) cin>>grid[i][j];
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<(1LL<w);j++){
            if(dp[i][j]==-1) continue;
            rec(i,1,j,0,0);
        }
    }
    cout<<dp[h][0]<<endl;

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
