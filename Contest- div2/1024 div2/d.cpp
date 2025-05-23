#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

int parity_cal(vector <int> &arr){
    int n=arr.size();
    vi a1;
    vi a2(n);
    int ans=0;
    for(int i=0;i<n;i++){
        a1.push_back(i);
    }
    sort(a1.begin(),a1.end(),[&arr](int a,int b){
        return arr[a]<arr[b];
    });

    for(int i = 0; i < n; i++){
        a2[a1[i]] = i;
    }
    vector<bool> vis(n,false);
    for(int i=0;i<n;i++){
        if(vis[i]||(a2[i]==i)) continue;
        int j=i,k=0;
        while(!vis[j]){
            vis[j]=true;
            k++;
            j=a2[j];
        }
        ans=(ans+(k-1))%2;
    }
    return ans;
}



void solve()
{
    int n;
    cin>>n;
    vi even;
    vi odd;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(i&1){
            odd.push_back(x);
        }
        else even.push_back(x);
    }
    int p1=parity_cal(even);
    int p2=parity_cal(odd);
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    vi res;
    for(int i=0;i<n;i++){
        if(i&1) res.push_back(odd[((i-1)/2)]);
        else res.push_back(even[i/2]);
    }
    if(p1!=p2){
        swap(res[n-1],res[n-3]);
    }
    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;
 
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
