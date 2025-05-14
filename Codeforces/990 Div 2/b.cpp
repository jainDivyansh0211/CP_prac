#include<bits/stdc++.h>
using namespace std;
//#define ll long long
//#define int long long
#define endl '\n'
             
void solve()
{
    int n;
    cin>>n;
    //code here
    string s;
    cin>>s;
    map <char,int> mp;
    map <char,int> revmp;
    for(int i=0;i<n;i++){
        mp[s[i]]+=1;
        revmp[s[i]]+=1;
    }

    vector<pair<char, int>> descV(mp.begin(), mp.end());
    sort(descV.begin(), descV.end(),
         [](const pair<char, int> &a, const pair<char, int> &b)
         {
            if (a.second != b.second)
                return a.second > b.second;
            else
                return a.first < b.first;
         });

    vector<pair<char, int>> ascV(revmp.begin(), revmp.end());
    sort(ascV.begin(), ascV.end(),
         [](const pair<char, int> &a, const pair<char, int> &b)
         {
            if(a.second!=b.second) return a.second < b.second;
            else return a.first>b.first;
         });

    char changeChar = ascV[0].first; 
    char changeto = descV[0].first;  

    //cout << "charchange: " << changeChar << endl;
    //cout << "charchangeto: " << changeto << endl;
    s[s.find(changeChar)]=s[s.find(changeto)];
    cout<<s<<endl;
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