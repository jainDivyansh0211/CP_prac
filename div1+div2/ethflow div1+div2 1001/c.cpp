#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int max_ans;

int eval(vector<int> &arr, int cur_len)
{
    if (cur_len <= 1)
        return 0;

    for (int i = 0; i < cur_len / 2; i++)
    {
        swap(arr[i], arr[cur_len - i - 1]);
    }

    int s = 0;
    vector<int> new_arr(cur_len - 1);
    for (int i = 0; i < cur_len - 1; i++)
    {
        new_arr[i] = arr[i + 1] - arr[i];
        s += new_arr[i];
    }

    
    max_ans = max(max_ans, s);
    for (int i = 0; i < cur_len - 1; i++)
    {
        arr[i] = new_arr[i];
    }

    return cur_len - 1;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }

    max_ans = s;
    int cur_len = n;

    while (cur_len > 1)
    {
        cur_len = eval(arr, cur_len);
    }

    cout << max_ans << endl;
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