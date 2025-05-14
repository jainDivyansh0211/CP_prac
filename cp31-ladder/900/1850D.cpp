#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector <int> arr;
    arr.resize(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(n==1) cout<<0<<endl;
    else if(n==2){
        cout<<((arr[1]-arr[0])>k)<<endl;
    }
    else{
        int max_len=1;
        int l=0;
        int r=1;
        int cur_len=1;
        while(l<n && r<n){
            //cout<<"l and r are : "<<l<<" "<<r<<endl;
            if((arr[r]-arr[l])<=k){
                cur_len+=1;
                l=r;
                r=l+1;
            }
            else{
                l=r;
                r=l+1;
                //cout<<cur_len<<endl;
                if (max_len < cur_len)
                    max_len = cur_len;
                cur_len=1;
            }
            if(max_len<cur_len) max_len=cur_len;
            // cout << "cur len is " << cur_len << endl;
            // cout<<"max len till now is "<<max_len<<endl;
        }
        cout<<n-max_len<<endl;
    }

}


signed main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int cases=1;
    cin>>cases;
    while(cases--) solve();
}

