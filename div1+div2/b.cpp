#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> cnt2;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if (mp[arr[i]] == 2)
            cnt2.push_back(arr[i]);
    }

    if (cnt2.empty())
    {
        cout << -1 << endl;
        return;
    }

    else if (cnt2.size() >= 2)
    {
        cout << cnt2[0] << " " << cnt2[0] << " " << cnt2[1] << " " << cnt2[1] << endl;
        return;
    }
    else{    
        int k = mp[cnt2[0]];
        int t=2;
        vector<int> newarr;
        for(int i=0;i<n;i++){
            if(arr[i]!=cnt2[0]){
                newarr.push_back(arr[i]);
            }
            else if(arr[i]==cnt2[0] && !t){
                newarr.push_back(arr[i]);
            }
            else t--;
        }
        sort(newarr.begin(),newarr.end());
        for(int i=0;i<n-3;i++){
            if(newarr[i+1]-newarr[i]<(2*cnt2[0])){
                cout << cnt2[0] << " " << cnt2[0] << " " << newarr[i+1] << " " << newarr[i] << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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