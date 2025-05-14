#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// Interesting logic to swap the elements till the value of elements next to it are smaller than the decreased value of that index char

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)  //O(N)
    {
        int k = s[i] - '0';
        for (int j = 1; (i - j) >= 0 && (s[i - j] - '0') < (k - j); j++)  //check untill what value can the swapping be done, at max 9 interations
        {
            s[i - j + 1] = '0' + (k - j);
            swap(s[i - j], s[i - j + 1]);
        }
    }
    cout << s << endl;  //overall O(9*N)
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