#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        vector<char> can(N, 0);
        for (int i = 0; i + 3 < N; i++) {
            bool is0101 = false;
            bool is1010 = false;
            if (S[i]   == '0' &&
                S[i+1] == '1' &&
                S[i+2] == '0' &&
                S[i+3] == '1') {
                is0101 = true;
            }
            if (S[i]   == '1' &&
                S[i+1] == '0' &&
                S[i+2] == '1' &&
                S[i+3] == '0') {
                is1010 = true;
            }
            if (is0101 || is1010) {
                can[i] = 1;
            } else {
                can[i] = 0;
            }
        }
        vector<int> dp(N,0);
        for(int i=0;i<N;i++){
            //without swapping cnt
            int c1;
            if(i>=1){
                c1=dp[i-1];
            }
            else c1=1;

            //swap and check
            int c2;
            if(i>=3 && can[i-3]){
                if(i>=4) c2=dp[i-4];
                else c2=1;
            }
            else{
                c2=0;
            }
            dp[i]=c1+c2%MOD;
        }

        cout << dp[N - 1] << "\n";
    }

    return 0;
}
