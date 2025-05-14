#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int p[n];
    p[0]=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i){
            if(arr[i]==arr[i-1]){
                p[i]=p[i-1];
            }
            else{
                p[i]=i-1;
            }
        }
    }
    // for(auto x:p){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        //l to r ans would be -1 and -1 for p[r]=-1 or p[l]=p[r] else
        int a1,a2;
        if(p[r]==p[l]) {
            a1=-1;
            a2=-1;
        }
        else{
            a1=r+1;
            a2=p[r]+1;
        }
        cout<<a1<<" "<<a2<<endl;
    }
    cout<<endl;
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