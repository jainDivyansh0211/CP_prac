#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    map <int,int> mp;
    int max_freq=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        max_freq=max(max_freq,mp[arr[i]]);
    }
    while(max_freq<n){
        cnt++;
        int new_freq = min(max_freq*2,n);
        cnt +=(new_freq-max_freq);
        max_freq=new_freq;
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