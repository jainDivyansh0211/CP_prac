#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    if(n%2 || (n<4)) cout<<-1<<endl;
    else{
        int max_y,min_y;
        int q=(n/6);
        int flag_1=1;
        int flag_2=1;
        while(flag_1){
            if((n-(q*6))%4==0) {
                max_y=q;
                flag_1=0;
            }
            else q--;
        }
        q=0;
        while (flag_2)
        {
            if ((n - (q * 6)) % 4 == 0)
            {
                min_y = q;
                flag_2 = 0;
            }
            else
                q++;
        }
        int s_min=-1;
        int s_max=-1;
        int n_new= n/2;
        //2s + y = n(new)
        if((n_new - min_y)%2==0) s_max=(n_new-min_y)/2;
        if((n_new-max_y)%2==0) s_min=(n_new-max_y)/2;
        if(s_min==-1 || s_max==-1) cout<<-1<<endl;
        else cout<<s_min<<" "<<s_max<<endl;
    }
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