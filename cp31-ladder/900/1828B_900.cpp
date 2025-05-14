#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    set <int> diff;
    vector <int> arr;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=(arr[i]-1)){
            diff.insert(abs((arr[i]-1)-i));
        }
    }
    int a=*diff.begin();
    for(auto it:diff){
        a=__gcd(a,it);
    }
    cout<<a<<endl;
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
