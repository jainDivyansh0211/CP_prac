#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,k,b,s;
    cin>>n>>k>>b>>s;
    int arr[n];
    int min_s=b*k;
    int max_s=min_s + n*(k-1);
    if(s==0 && b==0){
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else if(s<=max_s && s>=min_s){
        int a=min((b*k + (k-1)),s);
        arr[0]=a;
        int cur_s=a;
        for(int i=1;i<n;i++){
            if(cur_s==s) arr[i]=0;
            else if(s-cur_s >= (k-1)){
                arr[i]=(k-1);
                cur_s+=arr[i];
            }
            else{
                arr[i]=(s-cur_s);
                cur_s+=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
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