#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // code here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[n / 2]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int cases = 1;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        solve();
    }
}