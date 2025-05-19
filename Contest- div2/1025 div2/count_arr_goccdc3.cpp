#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
const int MOD=1e9+7;


void solve()
{
    int n;
    cin>>n;
    vector<int> p(n),q(n);
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) cin>>q[i];
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());
    int ans=1;
    for(int i=0;i<n;i++){
        int r = p.end() - upper_bound(p.begin(), p.end(), q[n-1-i]);
        //cout<<r<<endl;
        r = r - i;
        if(r <= 0){
            ans = 0;
            break;
        }
        ans = ans * r % MOD;
    }
    //cout<<endl;
    cout<<ans<<endl;
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
