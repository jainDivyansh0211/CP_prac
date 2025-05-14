#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'

int eval(int n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]-48){
            int t=(s[i]-48);
            if(n%t) return 0;
        }
    }
    return 1;
}
             
void solve()
{
    int n;
    cin>>n;
    while(!eval(n)){
        n++;
    }
    cout<<n<<endl;
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