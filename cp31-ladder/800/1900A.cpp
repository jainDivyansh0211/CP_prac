#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt_available=0;
    int cnt_3_seq=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt_available+=1;
            int new_cnt=1;
            while(((i+1)<n)&& (s[i+1]=='.')){
                new_cnt+=1;
                cnt_available+=1;
                i++;
            }
            if(new_cnt>=3) cnt_3_seq+=1;
        }
    }
    if(cnt_3_seq) cout<<2<<endl;
    else cout<<cnt_available<<endl;
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