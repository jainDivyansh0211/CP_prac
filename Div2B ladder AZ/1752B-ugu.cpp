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
    cin>>n;
    string s;
    cin>>s;
    //0(n)|1(n)
    int fans;
    int ans1=0;
    int prev;
    for(int i=0;i+1<n;i++){
        if(s[i]!=s[i+1]){
            ans1++;
        }
    }
    fans=ans1;
    //0(n)1(n)
    if (s[0]=='0') {
    int r = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            r = i;
            break;
        }
    }
    if (r != -1) {
        int ans2 = 0;
        for (int j = r; j+1 < n; j++) {
            if (s[j] != s[j+1])
                ans2++;
        }
        fans = min(fans, ans2);
    }
    }
    cout<<fans<<endl;
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
