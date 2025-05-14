#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'

int pr(int n){
    for(int i=2;i<=(int)(sqrt(n));i++){
        if(n%i==0) return 0;
    }
    return 1;
}
             
void solve()
{
    int n;
    cin>>n;
    int ans=n;
    int an=n/2;
    int bn=n/2;
    if(n%2){
        if(pr(n)){
            an=n-1;
            bn=1;
        }
        else{
            for (int i = 1; ((2*i+1) <= (int)(sqrt(n)));i++){
                if(n%(2*i+1)==0){
                    an=(n/(2*i+1));
                    bn=(n-an);
                    break;
                }
            }

        }
    }
    cout<<an<<" "<<bn<<endl;
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