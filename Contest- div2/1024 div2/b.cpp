#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    int l,r;
    cin>>n>>l>>r;
    int arr[n];
    vector<int> left, right;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i<r) left.push_back(arr[i]);
        if(i>=l-1) right.push_back(arr[i]);
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    int s1=0;
    int s2=0;
    for(int i=0;i<(r-l+1);i++){
        s1+=left[i];
        s2+=right[i];
    }
    cout<<min(s1,s2)<<endl;
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