#include<bits/stdc++.h>
using namespace std;
//#define ll long long
//#define int long long
#define endl '\n'
             
void solve()
{
    int n,m;
    cin>>n>>m;
    //code here
    int lencnt=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        lencnt+=(s.size());
        //cout << "len cnt is " << lencnt << endl;
        if(lencnt<=m) cnt+=1;
    }
    cout<<cnt<<endl;
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