#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'

int eval(int n, int x)
{
    int i = 1;
    int k = x;
    while (k <= n)
    {
        i++;
        k *= x;
    }
    return i;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a<b) cout<<1<<endl;
    else if(a==b) cout<<2<<endl;
    else{
        int n=b;
        if(n==1) n++;
        int cnt=eval(a,n)+(n-b);
        while(1)
        {
          // cout<<"cnt : "<<cnt<<endl;
            int t=eval(a,n)+(n-b);
          // cout<<"n is : "<<n<<endl;
          // cout<<"t is : "<<t<<endl;
            if(t>cnt) break;
            else cnt=t;
            n++;
        }
        cout<<cnt<<endl;
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