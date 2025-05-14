#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,p;
    cin>>n>>p;
    int a[n];
    int b[n];
    vector <pair<int,int>> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {
        cin>>b[i];
        mp.push_back(make_pair(b[i],a[i]));
    }
    int ans=0;
    int k=0;
    int last=0;
    int last_cnt=0;
    sort(mp.begin(), mp.end());
    vector <int> ne;
    for(auto v:mp){
        if(v.first < p) {
            k+=(v.second);
            ans += (v.second*v.first);
            if(k>=n){
                last=v.first;
                last_cnt=v.second;
                break;
            }
        }
        else break;
    }
    if(k>=n) {
        //cout<<"Last was : "<<last<<endl;
        //cout<<"k before and after : "<<k<<" ";
        k-=(last_cnt);
        k++;
        ans-=(last*last_cnt);
        ans = ans+p;
        ans +=(n-k)*last;
        cout<<ans<<endl;
    }
    else {
        ans += (n-k)*p;
        cout<<ans<<endl;
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