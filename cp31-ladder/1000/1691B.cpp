#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    int p[n];
    int i=0;
    int j=-1;
    int flag=1;
    while(i<n){
        while(j+1 < n && s[j+1]==s[i]){
            j++;
        }
        if(i==j) {
            flag=0;
            break;
        }
        else{
            for(int a=i;a<=j;a++){
                p[a]=a;
            }
            p[i]=j+1;
            i=j+1;
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            cout<<p[i]<<" ";
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