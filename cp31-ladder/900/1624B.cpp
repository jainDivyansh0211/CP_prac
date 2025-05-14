    #include<bits/stdc++.h>
    using namespace std;
    //#define ll long long
    #define int long long
    #define endl '\n'
                
    void solve()
    {
        int a,b,c;
        cin>>a>>b>>c;
        int k=(2*b);
        if (((k - c) >= a && ((k - c) % a == 0)) || ((k - a) >= c && ((k - a) % c== 0)) || (((a+c)>=k) && ((a+c)%k==0)))
            cout << "YES" << endl;
        else cout<<"NO"<<endl;
    }
    signed main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
        solve();
        }
        return 0;
    }