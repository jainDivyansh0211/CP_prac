#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    // 00 50 25 75
    int mrems=INT_MAX;
    string s=to_string(n);
    int len_int=s.size();
    for(int i=(len_int-1);i>0;i--){
        if(s[i]=='0' || s[i]=='5'){
            if(s[i]=='0'){
                int j=i-1;
                while(j>=0){
                    if(s[j]=='0' || s[j]=='5'){
                        int rems=(i-j-1)+(len_int-1-i);
                        mrems=min(rems,mrems);
                        break;
                    }
                    j--;
                }
            }
            else
            {
                int j = i - 1;
                while (j >= 0)
                {
                    if (s[j] == '2' || s[j] == '7')
                    {
                        int rems = (i - j - 1) + (len_int - 1 - i);
                        mrems = min(rems, mrems);
                        break;
                    }
                    j--;
                }
            }
        }
    }
    cout<<mrems<<endl;
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