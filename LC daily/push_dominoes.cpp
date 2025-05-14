#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    string dominoes;
    cin >> dominoes;
    int n = dominoes.size();
    string snew = "";
    // for(int i=0;i<n;i++){
    //     if(dominoes[i]!='.') snew+=dominoes[i];
    //     else{
    //         //look for nearest R on left
    //         //look for nearest L on right
    //         int r=0;
    //         int l=0;
    //         for(int j=i-1;(j>=0 && dominoes[j]!='L');j--){
    //             if(dominoes[j]=='R'){
    //                 r=(i-j);
    //                 break;
    //             }
    //         }
    //         for(int j=i+1;(j<n && dominoes[j]!='R');j++){
    //             if(dominoes[j]=='L'){
    //                 l=(j-i);
    //                 break;
    //             }
    //         }
    //         if(l==r){
    //             snew+=".";
    //         }
    //         else if(r==0){
    //             snew+="L";
    //         }
    //         else if(l==0){
    //             snew+="R";
    //         }
    //         else{
    //             if(l<r) snew+="L";
    //             else snew+="R";
    //         }
    //     }
    // }

    // look for nearest R on left and no L 
    //look for nearest L on right and no R
    int l[n];
    int r[n];
    int cur_l=0;
    int cur_r=0;

    //for l 
    for(int i=0;i<n;i++){
        if(cur_l>0){
            l[i]=(i-cur_l);
        }
        else l[i]=cur_l;
        if(dominoes[i]=='R'){
            cur_l=i;
        }
        if(dominoes[i]=='L') cur_l=0;
    }

    for (int i = n-1; i>=0; i--)
    {
        if (cur_r > 0)
        {
            r[i] = (cur_r-i);
        }
        else r[i] = cur_l;
        if (dominoes[i] == 'L')
        {
            cur_r = i;
        }
        if (dominoes[i] == 'R')
            cur_r = 0;
    }
    for(int i=0;i<n;i++){
        if(dominoes[i]!='.') snew+=dominoes[i];
        else{
            if(l[i]==r[i]) snew+=".";
            else if(r[i]==0) snew+="R";
            else if(l[i]==0) snew+="L";
            else{
                if(l[i]<r[i]) snew+="R";
                else snew+="L";
            }
        }
    }
    cout<<snew<<endl;
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