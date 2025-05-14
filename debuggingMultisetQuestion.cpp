#include <bits/stdc++.h>
using namespace std;

// #define endl '\n'
#define int long long
// #define ll long long

void solve()
{
    // code here
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    multiset<int> mt;
    for (int i = 0; i < n; i++)
    {
        if (!mt.empty())
        {
            if (*(mt.rbegin()) <= arr[i])
            {
                mt.insert(arr[i]);
            }
            else
            {
                
                auto it = mt.upper_bound(arr[i]);
                if(it!= mt.end()) mt.erase(it);
                mt.insert(arr[i]);
            }
        }
        else
        {
            mt.insert(arr[i]);
        }
    }
    cout << mt.size() << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        solve();
    }
}