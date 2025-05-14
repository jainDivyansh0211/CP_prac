#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int g;
    int allsame=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(!i) g=arr[i];
        else {
            if(allsame){
                allsame=(arr[i]==arr[i-1]);
            }
            g=__gcd(g,arr[i]);
        }
    }
    int cnt = 0;
    vector <int> res(n,1);
    for(int i=0;i<n;i++){
        if(__gcd(arr[i],g)!=g){
            res[i]=2;
            cnt+=1;
        }
    }
    if(cnt==0){
        if(allsame){
            cout<<"No"<<endl;
            return;
        }
        else{
            for(int i=0;i<n;i++){
                if(arr[i]!=g){
                    res[i]=2;
                    break;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}