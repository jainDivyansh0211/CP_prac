#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;  // a,b aren’t needed for the answer

        int turns = 0;
        // Each row‐cut can at best halve the number of rows (adversarially).
        while (n > 1) {
            n = (n + 1) / 2;
            ++turns;
        }
        // Each column‐cut can at best halve the number of columns.
        while (m > 1) {
            m = (m + 1) / 2;
            ++turns;
        }

        cout << turns << "\n";
    }

    return 0;
}
