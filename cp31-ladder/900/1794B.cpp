#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i]==1) {
            arr[i]++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i+1]%arr[i]==0) arr[i+1]++;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
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