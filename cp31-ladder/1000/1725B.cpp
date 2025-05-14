#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    //code here
    int d;
    cin>>d;
    int p[n];
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);
    int i=0;
    int j=n-1;
    int k=n;
    int cnt=0;
    while(i<=j){
        if(p[j]*k <= d) break;
        else{
            int r=ceil((d+1)/(double)p[j]);
            r--;
            i+=(r);
            if(i<=j) {
                cnt++;
            }
            j--;
        }
    }
    cout<<cnt<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}