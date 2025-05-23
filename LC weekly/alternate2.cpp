#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

int sumDig(int n){
    int r=0;
    while(n!=0){
        r+=(n%10);
        n/=10;
    }
    return r;
}


void minSwaps(vector<int>& nums) {
    vector <int> a1,a2;
    for(int i=0;i<nums.size();i++){
        a1.push_back(i);
        a2.push_back(i);
    }
    sort(a1.begin(),a1.end(),[&nums](int a,int b){
        int x=sumDig(nums[a]);
        int y=sumDig(nums[b]);
        if(x!=y) return x<y;
        else return nums[a]<nums[b];
    });
    for(int i = 0; i < nums.size(); i++){
        a2[a1[i]] = i;
    }

    vector<bool> vis(nums.size(), false);
    int cnt = 0;
    for(int i = 0; i < nums.size(); i++){
        if(vis[i] || a2[i] == i) continue;
        int cycle = 0, j = i;
        while(!vis[j]){
            vis[j] = true;
            j = a2[j];
            cycle++;
        }
        cnt += cycle - 1;
    }
    cout<<cnt<<endl;
}

void solve()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    minSwaps(arr);
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
