//INTERACTIVE PROBLEM -> value of x is assumed by the compiler before_hand

#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>

void solve()
{
    int n;
    cin>>n;


    cout<<"digit"<<endl;
    cout.flush();

    int r;
    cin>>r;

    cout<<"digit"<<endl;
    cout.flush();
    cin>>r;  // x is now 1-15

    cout<<"add "<<-8<<endl;
    cout.flush();
    cin>>r;
    
    cout<<"add "<<-4<<endl;
    cout.flush();
    cin>>r;

    cout<<"add "<<-2<<endl;
    cout.flush();
    cin>>r; //x is now 1-2

    cout<<"add "<<-1<<endl;
    cout.flush();
    cin>>r;

    cout<<"mul "<<n<<endl;
    cout.flush();
    cin>>r;

    cout<<"!"<<endl;
    cout.flush();
    cin>>r;
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
