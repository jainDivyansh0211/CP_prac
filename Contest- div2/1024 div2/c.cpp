#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
int n;

vii final_matrix;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

int is_valid(int x,int y){
    if(x>=0 && y>=0 && x<n && y<n && final_matrix[x][y]==-1) return 1;
    else return 0;
}


void solve()
{
    cin>>n;
    final_matrix.clear();
    final_matrix.assign(n,vi(n,-1));
    //n even ends at Left bottom
    //n odd ends at Right top
    int xi,yi;
    int st;
    int cur=n*n -1;
    if(n&1){
        xi=0;
        yi=n-1;
        st=0;

    }
    else{
        xi=n-1;
        yi=0;
        st=2;
    }
    final_matrix[xi][yi]=cur;
    cur--;
    while(cur>=0){
        if(!is_valid(xi+dx[st],yi+dy[st])) st=(st+1)%4;
        xi=xi+dx[st];
        yi=yi+dy[st];
        final_matrix[xi][yi]=cur;
        cur--;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<final_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
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
