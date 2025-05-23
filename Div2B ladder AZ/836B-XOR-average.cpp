#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int n;
    cin>>n;
    if(n%2){
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n-2;i++){
            cout<<2<<" ";
        }
        cout<<1<<" "<<3<<" ";
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
