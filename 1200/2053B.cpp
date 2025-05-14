//Basically create a vector storing pairs
//Then check if li==ri then that value is compulsoraly present in element, inc the compulsary element value in the arr array by 1
//Now we have to entertain for n diff queries, so it is best to use a prefix sum
//Prefix sum of ith index will contain the prefix sum of i-1 + (whether it is compulsory to include the ith value or not)
//Now value sum of (ri+ri-1+....li)= presum(ri)-presum(li-1) => if all the values b/w li...ri are compulsary then the res=0, else res=1;
//Now if li==ri is there in query then we check the value of arr[li] , iff it is =1 then res=1 else res=0

//Why I looked the editorial, because I couldn't get the implementation of this correct
//But now it is Intutive as the Complexity decreases we have


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    vector<int> arr(2 * n + 1, 0);
    vector<int> presum(2 * n + 1);
    for (int i = 0; i < n; i++)
    {
        int li, ri;
        cin >> li >> ri;
        v[i] = make_pair(li, ri);
        if (v[i].first == v[i].second)
        {
            arr[v[i].first]++;
        }
    }
    presum[0] = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        presum[i] = presum[i - 1] + min(arr[i], 1LL);
    }
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[i].second)
        {
            res.push_back(arr[v[i].first] == 1);
        }
        else
        {
            if ((presum[v[i].second] - presum[v[i].first - 1]) == (v[i].second - v[i].first + 1))
                res.push_back(0);
            else
                res.push_back(1);
        }
    }
    for (int i = 0; i < n; i++)
        cout << res[i];
    cout << endl;
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