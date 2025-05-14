#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, x;
int arr[55];

bool check(int f)
{
    int cur_fuel=f;
    int dist;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            if(i) dist= 2*(x-arr[i-1]);
            else dist=2*(x);
            if(cur_fuel<dist) return false;
            break;
        }
        else if(i==(n-1)){
            dist=max((arr[i]-arr[i-1]),(2*(x-arr[i])));
            if(cur_fuel<dist) return false;
        }
        else{
            if(i) dist=(arr[i]-arr[i-1]);
            else dist = (arr[i]);
            if(cur_fuel<dist) return false;
           }
    }
    return true;
}

void solve()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (arr[0] > x)
    {
        cout << 2 * x << endl;
        return;
    }

    int lo = 1, hi = 2 * x;
    int ans = 2 * x;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        //cout<<"Checking for mid = "<<mid<<" is "<<check(mid)<<endl;
        if (check(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
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