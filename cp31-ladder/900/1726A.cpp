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
    int cpy_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cpy_arr[i]=arr[i];
    }
    int ans=0;
    sort(arr,arr+n);
    if(arr[0]==cpy_arr[0] ||(arr[n-1]==cpy_arr[n-1])){
        ans=(arr[n-1]-arr[0]);
    }
    else{
        ans=(cpy_arr[n-1]-cpy_arr[0]);
        for(int i=n-1;i>0;i--){
            int d=(cpy_arr[i-1]-cpy_arr[i]);
            ans= max(d,ans);
        }
    }
    cout << ans << endl;
    //code here
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