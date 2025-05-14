#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    int k;
    cin>>n>>k;
    int arr[n+1];
    arr[2]=1;
    for(int i=n;i>2;i--){
        arr[i]=(i*(i-1)/2);
    }
    int m=2;
    while(arr[m]<k){
        m++;
    }
    string s="";
    for(int i=0;i<(n-m);i++) s+="a";
    s+="b";
    int cur_i=n-m;
    int rem=arr[m]-k;
    for(int i=0;i<rem;i++){
        s+="a";
    }
    s+="b";
    cur_i+=(rem+1);
    for(cur_i;cur_i<n-1;cur_i++){
        s+="a";
    }
    cout<<s<<endl;
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