#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> s_pos, p_pos;
    vector<int> dots;

    // Store positions of 'p', 's' and '.'
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'p')
            p_pos.push_back(i);
        else if (s[i] == 's')
            s_pos.push_back(i);
        else
            dots.push_back(i); // Store dot positions
    }

    int s_cnt = s_pos.size();
    int p_cnt = p_pos.size();

    if (p_cnt == 0 || s_cnt == 0)
    {
        // If we only have one type of constraint (or none),
        // it's always possible using the dots
        cout << "YES" << endl;
        return;
    }

    // For each 'p', we need a permutation up to that position
    // For each 's', we need a permutation from that position to end
    bool possible = true;

    // Check if any 's' comes before any 'p'
    int earliest_s = s_pos.empty() ? n : s_pos[0];
    int latest_p = p_pos.empty() ? -1 : p_pos.back();

    if (latest_p >= earliest_s)
    {
        // If there's an 's' before 'p', check if there are enough dots
        // between them to make it possible
        int needed_dots = 0;
        for (int i = earliest_s; i <= latest_p; i++)
        {
            if (s[i] == '.')
                needed_dots++;
        }
        // If we don't have enough dots to separate 'p' and 's'
        if (needed_dots == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    // For each 'p', check if we can form a valid prefix permutation
    for (int p : p_pos)
    {
        int needed = p + 1;            // need numbers 1 to p+1
        int available = p + 1 - s_cnt; // subtract positions taken by 's'
        if (available < needed)
        {
            possible = false;
            break;
        }
    }

    // For each 's', check if we can form a valid suffix permutation
    for (int s : s_pos)
    {
        int needed = n - s;            // need numbers 1 to (n-s)
        int available = n - s - p_cnt; // subtract positions taken by 'p'
        if (available < needed)
        {
            possible = false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;
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