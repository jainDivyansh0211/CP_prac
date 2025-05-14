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
    int ans=0;
    int a[n];
    int b[n];
    for(int i=0;i<(n);i++) cin>>a[i];
    for (int i = 0; i < (n); i++)
        cin >> b[i];
    map <int,int> apos;
    map <int, int> bpos;
    int h=-1;
    int t=0;
    while(t<n){
        while(h+1 < n && (a[h+1]==a[t])){
            h++;
        }
        
        apos[a[t]]=(max(apos[a[t]],h-t+1));
        ans=max(ans,apos[a[t]]);
        if(t>h){
            h=t;
            t++;
        }
        else{
            t=h+1;
        }
    }
    for(auto x:apos){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    t=0;
    h=-1;
    while (t < n)
    {
        while (h + 1 < n && (b[h + 1] == b[t]))
        {
            h++;
        }

        bpos[b[t]] = (max(bpos[b[t]], h - t + 1));
        ans = max(ans, bpos[b[t]]);
        if (t > h)
        {
            h = t;
            t++;
        }
        else
        {
            t = h + 1;
        }
    }
    for (auto x : bpos)
    {
        cout << x.first << " : " << x.second << endl;
    }
    cout<<endl;
    
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