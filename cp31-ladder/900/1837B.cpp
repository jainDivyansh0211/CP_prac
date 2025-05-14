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
    int i=0;
    int max_consec_len=1;
    while(i<n){
        int cur_consec_len=1;
        if(s[i]=='<'){
            //loop across higher indices and check if the have same val
            while((i+1 < n) && (s[i+1]=='<')){
                cur_consec_len++;
                i++;
            }
            if(cur_consec_len > max_consec_len){
                max_consec_len=cur_consec_len;
            }
        }
        else{
            //loop for other case
            while ((i + 1 < n) && (s[i + 1] == '>'))
            {
                cur_consec_len++;
                i++;
            }
            if (cur_consec_len > max_consec_len)
            {
                max_consec_len = cur_consec_len;
            }
        }
        i++;
    }
    cout<<(max_consec_len+1)<<endl;
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