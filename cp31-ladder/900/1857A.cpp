#include<bits/stdc++.h>
using namespace std;
//#define ll long long
#define int long long
#define endl '\n'
             
void solve()
{
    int n,a,b;
    cin>>a>>b>>n;
    vector <int> arr;
    arr.resize(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    // sort(arr.begin(), arr.end());
    int cur_time=b;
    int elapsed_time=0;
    int cur_pos=0;
    while(cur_time)
    {
        if(cur_time==1)
        {
            if(cur_pos<n){
            if((cur_time + arr[cur_pos])<=a) {
                cur_time += (arr[cur_pos]);
                cur_pos++;
            }
            else{
                cur_time=a;
                cur_pos++;
            }
            }
            cur_time--;
            elapsed_time++;
        }
        else{
            elapsed_time+=(cur_time-1);
            cur_time=1;
        }
    }
    //code here
    cout<<elapsed_time<<endl;
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