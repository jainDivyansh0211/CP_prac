#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int c=0;
    for(int j=0;j<m;j++){
        vector <int> v(n);
        for(int i=0;i<n;i++){
            v[i]=arr[i][j];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            c += ((-1*(n-1 -(2*i)))*v[i]);
        }
    }
    cout<<c<<endl;
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