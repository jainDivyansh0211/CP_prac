#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long

const int MAX_N = 1e6 + 5;
vector<bool> is_prime(MAX_N, true);
vector<int> primes;

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < MAX_N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < MAX_N; i++)
    {
        if (is_prime[i])
            primes.push_back(i);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int total = n * m;
    for (int i = 0; i < total; i++)
    {
        cout << primes[i] << " ";
        if ((i + 1) % m == 0)
            cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    sieve();

    int cases = 1;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        solve();
    }
}