#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
string s;

void solve()
{
    int n;
    cin>>n;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        int freq[10]={0};
        int c=0;
        int fm=0;
        for(int j=i;(j<i+100)&&j<n;j++){
            if(freq[s[j]-'0']==0) c++;
            freq[s[j]-'0']++;
            fm=max(freq[s[j]-'0'],fm);
            if(c>=fm) cnt++;
        }
    }
    cout<<cnt<<endl;
 
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
