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
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans;
    int l=0;
    while(l<n && (((a[n-1]+a[l])%2)!=0)){
        l++;
    }
    int r=0;
    while(r<n && (((a[n-1-r]+a[0])%2)!=0)){
        r++;
    }
    cout<<min(l,r)<<endl;

    
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
