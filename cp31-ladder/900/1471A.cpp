#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define int long long
#define endl '\n'

void solve()
{
    int n;
    int x;
    cin >> n >> x;
    int arr[n];
    int b = 0;
    int b2=0;
    map<int, int> rem;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        b += (ceil(arr[i] / (double)x));
        b2+=(arr[i]);
    }
    b2=ceil(b2/(double)x);
    cout<<b2<<" "<<b<<endl;
    

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