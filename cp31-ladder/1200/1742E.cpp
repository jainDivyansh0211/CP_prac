#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
int n;
int maxele [200005];
int eval(int v){
    int ans=-1;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(maxele[mid]>v){
            hi=mid-1;
            ans=mid;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}

             
void solve()
{
    cin>>n;
    int q;
    cin>>q;
    vector <int> presum(n+1);
    presum[0]=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i) {
            maxele[i]=max(maxele[i-1],x);
        }
        else{
            maxele[i]=x;
        }
        presum[i+1]=presum[i]+x;
    }

    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        if(k<maxele[0]) cout<<0<<" ";
        else if(k>=maxele[n-1]) cout<<presum[n]<<" ";
        else {
            int j=eval(k);
            cout<<presum[j]<<" ";
        }
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(maxele,0,sizeof(maxele));
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}