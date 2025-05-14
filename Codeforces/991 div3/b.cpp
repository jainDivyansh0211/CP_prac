#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int sum=0;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=(arr[i]);
    }
    if(sum%n){
        cout<<"No"<<endl;
    }
    else{
        int avg=sum/n;
        cout << "Avg is " << avg<<endl;
        int nsum=0;
        int flag=1;
        for(int i=0;i<n;i++){
            nsum += (arr[i]-avg);
            if(nsum<0) {
                flag=0;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
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