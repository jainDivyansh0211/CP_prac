#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
int n,k;

vi spf;


pair <int,int> func (int num){
    map<int,int> primes;
    while(num!=1){
        primes[spf[num]]++;
        num/=spf[num];
    }
    int red=1;
    int resc=1;
    for(auto x:primes){
        int t=x.second%k;
        if(t==0) continue;
        else
        {
        for(int i=t;i<k;i++){
            resc*=(x.first);
        }
        for(int i=0;i<t;i++){
            red*=(x.first);
        }
        }
    }
    return make_pair(resc,red);
}

void solve()
{
    spf.resize(1e5+2);
    for(int i=0;i<=(1e5);i++){
        spf[i]=i;
    }
    for(int i=2;i<=1e5;i++){
        if(spf[i]==i){
            for(int j=2*i;j<=1e5;j+=i){
                spf[j]=i;
            }
        }
    }
    cin>>n>>k;
    map <int,int> freq;
    int ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        auto p=func(x); //first is complement, reduced is second
       // cout<<"reduced is : "<<p.second<<" complement is : "<<p.first<<endl;
        ans+=(freq[p.first]);
        freq[p.second]++;
        //cout<<"ans is : "<<ans<<endl;
    }
    cout<<ans<<endl;
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
