#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool hasAtLeastFourFactors(int a, int d)
{
    int cnt = 2, smallest_prime = -1;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            cnt++;
            if (i * i != a)
                cnt++;
            if (smallest_prime == -1)
                smallest_prime = i;
        }
        if (cnt >= 4)
            break;
    }
    if (cnt < 4)
        return false;
    return (smallest_prime - 1 >= d);
}

void solve()
{
    int n;
    cin >> n;
    int i = max(n, 6LL);
    while (true)
    {
        if (hasAtLeastFourFactors(i, n))
        {
            cout << i << endl;
            return;
        }
        i++;
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
