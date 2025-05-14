#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define int long long
#define endl '\n'

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    //if(n==1) cout<<"YES"<<endl
    map <char,int> cnt_letters;
    int odd_freq_char=0;
    for(int i=0;i<n;i++){
        cnt_letters[s[i]]++;
    }
    for (auto it: cnt_letters){
        if(it.second %2){
            odd_freq_char+= 1;
        }
    }

    //cout<<"char count is : "<<odd_freq_char<<endl;
    if ((odd_freq_char-1) <= k)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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