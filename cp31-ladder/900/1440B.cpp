#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,k;
    cin>>n>>k;
    int len=(n*k);
    int sum=0;
    vector <int> arr;
    arr.resize(len);
    for(int i=0;i<len;i++)  cin>>arr[i];
    int left_skip, right_skip;
    if(n%2){
        left_skip=((n+1)/2)-1;
        right_skip=((n+1)/2);
    }
    else{
        left_skip=(n-1)/2;
        right_skip=(n/2)+1;
    }

    int left_point=(left_skip-1);
    int right_point=(len-right_skip);

    while(right_point>left_point){
        sum+=(arr[right_point]);
        right_point-=(right_skip);
        left_point+=(left_skip);
    }
    cout<<sum<<endl;
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