#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define int long long
#define endl '\n'

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int minpos = 0;
    int maxpos = k*n;
    minpos = ((k*(k+1))/2);
    maxpos = maxpos- (((k-1)*(k))/2);
    //cout<<"MAX IS : "<<maxpos<<" MIN : "<<minpos<<endl;
    if(minpos <= x && (x <= maxpos)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
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