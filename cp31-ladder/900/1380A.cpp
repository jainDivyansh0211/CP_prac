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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    vector<int> ans;
    for(int j=1;j<n-1;j++){
        int i=0;
        int k=n-1;
        while(i<j && j<k){
            if(arr[i]<arr[j] && arr[j]>arr[k]) {
                cnt++;
                vector<int> v;
                ans={i+1,j+1,k+1};
                break;
            }
            else if(arr[i]>arr[j]) i++;
            else k--;
        }
        if(cnt) break;
    }
    if(cnt){
        cout<<"YES"<<endl;
        for(auto v:ans){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
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