#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int n, c1, c2;
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        c1 = 0;
        c2 = 0;
        n = 0;
        cin >> n;
        int rem = n % 3;
        int min_coins = n / 3;
        if (rem == 0)
        {
            c1 = min_coins;
            c2 = min_coins;
        }
        else if (rem == 1)
        {
            c1 = min_coins + 1;
            c2 = min_coins;
        }
        else
        {
            c1 = min_coins;
            c2 = min_coins + 1;
        }
        cout << c1 << " " << c2 << endl;
    }
}

// 3n
// 3n+1
// 3n+2
