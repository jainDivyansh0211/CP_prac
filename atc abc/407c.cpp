#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        int k=s[i]-'0';
        k=k-(cnt-(n-1-i));
        if(k<0){
            k=(k + 10*(ceil(abs(k)/10.0)));
        }
       // cout<<"k is : "<<k<<endl;
        cnt+=(k+1);
       // cout<<"cur cnt: "<<cnt<<endl;
       // cout<<endl;
    }
    cout<<cnt<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
