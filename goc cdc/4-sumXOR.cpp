#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int s,x;
    cin>>s>>x;
    if(s<x || (s%2!=x%2)){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        int a=0,b=0;
        int r=(s-x)/2;
        for(int i=0;i<=31;i++){
            if((r>>i) &1){
                a+=(1LL<<i);
                b+=(1LL<<i);
            }
            if((x>>i) &1){
                b+=(1LL<<i);
            }
        }
        if ( ((a ^ b) == x) && ((a + b) == s))cout << a << " " << b << endl;
        else cout << -1 << " " << -1 << endl;
    }
 
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
