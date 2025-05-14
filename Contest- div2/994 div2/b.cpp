#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    //code here
    string s;
    cin>>s;
    int flag=1;
    vector <int> s_pos;
    vector <int> p_pos;
    for(int i=0;i<n;i++){
        if(s[i]=='p') p_pos.push_back(i);
        else if(s[i]=='s') s_pos.push_back(i);
    }
    int s_cnt=s_pos.size();
    int p_cnt=p_pos.size();
    if(p_cnt && s_cnt){
        if(p_pos[0]==0 || s_pos[s_cnt-1]==(n-1)) cout<<"NO"<<endl;
        else{
        for(int i=0;i<p_cnt;i++){
            if(s_pos[s_cnt-1] >= p_pos[i]) flag=0;
        }
        for(int i=1;i<n-1;i++){
            if(s[i]=='s' && (((i+1)<(n-1)) && s[i+1]=='p')) flag=0;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
    }
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