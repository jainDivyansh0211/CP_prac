#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
#define yes() cout<<"YES"<<endl
#define no() cout<<"NO"<<endl


void solve()
{
    int n;
    cin>>n;
    //11 111
    //by chicken nugdet theorem -> every number larger than 11*111- (121) -> 1099 can be made
    if(n>1099 || n%11==0){
        yes();
        return;
    }
    //11x + 111y => c 
    int r=n/111;
    for(int i=0;i<=r;i++){
        if(((n-(111*i))%11)==0){
            yes();
            return;
        }
    }
    no();
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
