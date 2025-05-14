#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

void solve(){
    int n;
    cin>>n;
    int arr[n][n];
    int negs=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
            if(arr[i][j]<0) negs+=1;
        }
    }
    int cost=0;
    if(negs==0) cout<<0<<endl; 
    else {
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<0){
                int k=i;
                int s=j;
                int cur_min=0;
                while (k<n && s<n){
                    if(arr[k][s]<0){
                        if(cur_min>arr[k][s]) cur_min=arr[k][s];
                    }
                    k++;
                    s++;
                }
                k=i; s=j;
                while (k < n && s < n)
                {
                    arr[k][s]+=abs(cur_min);
                    k++; s++;
                }
                cost += abs(cur_min);
            }
        }
    }
    cout<<cost<<endl;
    }
}

signed main(){
    //fast IO
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int cases=1;
    cin>>cases;
    while(cases--) solve();
}