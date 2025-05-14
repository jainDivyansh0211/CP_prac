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
    int ops=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    int p=(n-1);
    while(p>0){
      //  cout<<"p is : "<<p<<endl;
      // cout<<"arr[p] is : "<<arr[p]<<" and arr[p-1]: "<<arr[p-1]<<endl;
        if((arr[p-1]>=arr[p]) && (arr[p]!=0)){
            while(arr[p-1]>=arr[p]){
                arr[p-1]=arr[p-1]/2;
                ops+=1;
            }
            if(arr[p-1]==0 && (p-1)){
                ops=-1;
                break;
            }
        }
        else if(arr[p]==0) {
            ops=-1;
            break;
        }
        p--;
    }
    cout<<ops<<endl;
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