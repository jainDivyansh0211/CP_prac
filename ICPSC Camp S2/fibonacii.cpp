#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
const int MOD=1e9+7;



vii mul2matrix(vii m1,vii m2){
    vii res(2,vi(2));
    res[0][0]=(m1[0][0]*m2[0][0]%MOD+ m1[0][1]*m2[1][0]%MOD)%MOD;
    res[0][1]=(m1[0][0]*m2[0][1]%MOD+ m1[0][1]*m2[1][1]%MOD)%MOD;
    res[1][0]=(m1[1][0]*m2[0][0]%MOD+ m1[1][1]*m2[1][0]%MOD)%MOD;
    res[1][1]=(m1[1][0]*m2[0][1]%MOD+ m1[1][1]*m2[1][1]%MOD)%MOD;
    return res;
}

void solve()
{
    int n;
    cin>>n;
    vii mat={{1,1},{1,0}};
    vii sup={{1,0},{0,1}};

    while(n>0){
        if(n%2){
            sup= mul2matrix(mat,sup);
        }
        n/=2;
        mat=mul2matrix(mat,mat);
    }
    cout<<sup[0][1]<<endl;
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
