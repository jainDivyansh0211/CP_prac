#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    int max_gcd=(abs(b-a));
    cout<<max_gcd<<" ";
    int cur_gcd=(__gcd(a,b));
    if (max_gcd == 0 || max_gcd == cur_gcd)
        cout << 0 << endl;
    else{
        int remainder = min(a, b) % max_gcd;
        int cnt = min(remainder, max_gcd - remainder);
        cout << cnt << endl;
    }
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