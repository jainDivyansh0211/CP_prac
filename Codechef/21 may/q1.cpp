#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define vi vector<int>

void solve() {
    int n, x;
    cin >> n >> x;
    if ((floor(log2(n)) < floor(log2(x))) || x == 1) {
        for (int i = 1; i <= n; i++) cout << i << " ";
        cout << endl;
        return;
    }
    vector<int> arr(n+1, 0), present(n+1, 0);
    for (int i = 1; i <= n; i++) {
        if ((~x & i) == 0) {
            int j = x ^ i;
            if (j > i && j <= n) {
                arr[i] = j;
                arr[j] = i;
                present[i] = present[j] = 1;
            }
        }
    }


    if (x <= n && !present[x]) {
        arr[x] = x;
        present[x] = 1;
    }
    vi np;

    for (int v = 1; v <= n; v++) {
        if (!present[v]) np.push_back(v);
    }

    int idx = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            arr[i] = np[idx++];
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
