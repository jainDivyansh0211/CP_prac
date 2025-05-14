#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int n;
        cin >> n;
        int odd = 0;
        int even = 0;
        for (int j = 0; j < 2 * n; j++)
        {
            int num;
            cin >> num;
            if (num % 2)
                odd++;
            else
                even++;
        }
        if (odd == even)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}