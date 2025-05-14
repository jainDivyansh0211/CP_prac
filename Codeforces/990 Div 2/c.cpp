#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    
    vector<int> r1(n), r2(n);
    for(int i = 0; i < n; i++) cin >> r1[i];
    for(int i = 0; i < n; i++) cin >> r2[i];

    // Try all column permutations
    vector<pair<int, int>> columns(n);
    for(int i = 0; i < n; i++) {
        columns[i] = {r1[i], i};
    }
    
    // Sort columns based on first row values
    sort(columns.begin(), columns.end());
    
    int maxSum = LLONG_MIN;
    
    // Generate all possible column permutations
    do {
        // Reconstruct rows based on current permutation
        vector<int> curr_r1(n), curr_r2(n);
        for(int i = 0; i < n; i++) {
            curr_r1[i] = r1[columns[i].second];
            curr_r2[i] = r2[columns[i].second];
        }
        
        // Calculate path sum
        int currentSum = curr_r1[0];  // Start from first element
        int currentRow = 1;
        
        for(int i = 1; i < n; i++) {
            if(currentRow == 1) {
                currentSum += curr_r1[i];
                currentRow = 2;
            } else {
                currentSum += curr_r2[i];
                currentRow = 1;
            }
        }
        
        // Always end at last element of second row
        currentSum += curr_r2[n-1];
        
        // Update maximum sum
        maxSum = max(maxSum, currentSum);
    } while(next_permutation(columns.begin(), columns.end()));
    
    cout << maxSum << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}