#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int n;
    cin>>n;
    int flag=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(!arr[i]) flag+=1;
    }
    vector<pii> v;
    if(!flag){
        v.push_back({1,n});
    }
    else{
        //first char non zero
        if(arr[0]!=0){
            v.push_back({2,n});
            v.push_back({1,2});
        }
        else if(arr[0]==0){
            //00...0...
            if(arr[1]==0){
                if(flag>2){
                    v.push_back({3,n});
                    v.push_back({1,2});
                    v.push_back({1,2});
                }
                else if(flag==2){
                    v.push_back({1,2});
                    v.push_back({1,n-1}); 
                }
            }
            //0x...0...
            else{
                if(flag>1){
                    v.push_back({3,n}); //non zero
                    v.push_back({1,2}); //non zero
                    v.push_back({1,2}); //0 
                }
                else if(flag==1){
                    v.push_back({1,2});
                    v.push_back({1,n-1});
                }
            }
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
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
