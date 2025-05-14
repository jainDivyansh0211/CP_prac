#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    //code here
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> a1(2e5+10);
    vector<int> b1(2e5+10);
    int c=1;
    for(int i=0;i<n;i++){
        while (i + 1 < n && a[i + 1] == a[i])
        {
            c++;
            i++;
        }
        a1[a[i]]=c;
        c=1;
    }
    c=1;
    for (int i = 0; i < n; i++)
    {
        while (i + 1 < n && b[i + 1] == b[i])
        {
            c++;
            i++;
        }
        b1[b[i]] = c;
        c = 1;
    }
    int ans=0;
    for(int i=1;i<(2e5+1);i++){
        ans=max(ans,(a1[i]+b1[i]));
    }
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}