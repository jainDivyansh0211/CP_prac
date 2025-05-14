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
    return i-1;
}

int divi(int a,int b){
    if(a%b) return -1;
    else{
        int t=(a/b);
        int k=(int)log2(t);
        if(t-(1LL<<k)) return -1;
        else{
            return (k/3 + ((k%3)>0));
        }
    }
}

int mul(int a,int b){
    if(b%a) return -1;
    else{
        int t = (b / a);
        int k = (int)log2(t);
        if (t - (1LL << k))
            return -1;
        else
        {
            return (k / 3 + ((k % 3) > 0));
        }
    }
}
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a>=b){
        //divide a again n again to get b
        cout<<divi(a,b)<<endl;
    }
    else{
        cout<<mul(a,b)<<endl;
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