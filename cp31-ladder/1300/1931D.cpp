#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int> 

             
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<pii> v(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i].first=a%x;
        v[i].second=a%y;
    }
    sort(v.begin(),v.end());
    // for(auto i:v){
    //     cout<<"("<<i.first<<","<<i.second<<")"<<" ";
    // }
    // cout<<endl;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        int k=(x-v[i].first)%x;
        int lo=i+1;
        int hi=n-1;
        //cout << "lo is : " << lo << " hi is : " << hi << endl;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(v[mid].first<k){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
        int st=lo;

        lo=i+1;
        hi=n;
        //get first value > k 
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(v[mid].first<=k){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }        
        int en=hi;
        for(int j=st;j<en;j++){
            if(v[j].first==k) cnt+=(v[j].second==v[i].second);
        }
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