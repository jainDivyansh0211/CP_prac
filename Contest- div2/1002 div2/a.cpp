#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    set <int> sta;
    set <int> stb;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sta.insert(a[i]);
    }
    for (int i = 0; i<n; i++)
        {cin >> b[i];
        stb.insert(b[i]);
        }
    if(sta.size()>=3 || stb.size()>=3){
        cout<<"YES"<<endl;
    }
    else{
        if(sta.size()+stb.size()>3){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
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