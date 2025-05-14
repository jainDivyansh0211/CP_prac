#include <bits/stdc++.h>
using namespace std;
// #define ll long long
// #define int long long
#define endl '\n'

int find_fact_num(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if ((i * i) == n)
            cnt += 1;
        else if (n % i == 0)
            cnt += 2;
    }
    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    // code here
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum % 2 == 1 && (find_fact_num(sum) % 2 == 1))
        {
            res += 1;
        }
    }
    cout << res << endl;
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