#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    //code here
    string n;
    cin >> n;
    int sum = 0;
    int cnt2=0;
    int cnt3=0;
    for (char digit : n)
    {
        int k= (digit - '0');
        sum+=k;
        if(k==2) cnt2+=1;
        if(k==3) cnt3+=1;

    }
    if(cnt2 + cnt3){
        cnt3 = cnt3%3;
        cnt2 = cnt2%9;
        if(cnt3==0){
            
        }
    }    
    else{
        if(sum%9) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
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