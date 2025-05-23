    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define endl '\n'
    #define pii pair<int,int>
    #define vi vector<int>
    #define vii vector<vector<int>>
    const int MOD=1e9+7;


    vii mul2matrix(const vii &m1, const vii &m2){
        vii res(2,vi(2));
        res[0][0]=(m1[0][0]*m2[0][0]%MOD+ m1[0][1]*m2[1][0]%MOD)%MOD;
        res[0][1]=(m1[0][0]*m2[0][1]%MOD+ m1[0][1]*m2[1][1]%MOD)%MOD;
        res[1][0]=(m1[1][0]*m2[0][0]%MOD+ m1[1][1]*m2[1][0]%MOD)%MOD;
        res[1][1]=(m1[1][0]*m2[0][1]%MOD+ m1[1][1]*m2[1][1]%MOD)%MOD;
        return res;
    }

    vii mat_expo(const vii &mat, int x)
    {
        if(x==0) return {{1,0},{0,1}};
        if(x==1) return mat;
        if(x%2==0){
            vii r=mat_expo(mat,x/2);
            return mul2matrix(r,r);
        }
        else{
            return mul2matrix(mat,mat_expo(mat,x-1));
        }
    }


    void solve()
    {
        int n;
        cin>>n;
        if(n==0) {
            cout<<0<<endl;
            return;
        }
        vector <vector<int>> matrix={{1,1},{1,0}};
        vii res=mat_expo(matrix,n-1);
        cout<<res[0][0]<<endl;
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
