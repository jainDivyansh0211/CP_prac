#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int n;
    cin >> n;
    int c1 = 0;
    bool prev_zero = false;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i = 0; i < n; i++) 
    {
        int x=arr[i];
        if(x==0){
            if (prev_zero) {
                cout << "YES" << endl;
                return;
            }
            prev_zero = true;
        }
        else if (x == 1) {
            c1++;
            prev_zero = false;
        }
    }
    if (c1 == n || c1 == 0) {
        cout << "YES"<< endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
