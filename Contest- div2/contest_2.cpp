#include <bits/stdc++.h>
#include <string>
using namespace std;


void update_arr(int arr[],int i,int n){
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    arr[n-1]=0;
    return;
}

int min_i(int arr[], int m)
{
    int min = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] < arr[min])
            min = i;
    }
    return min;
}

int max_i(int arr[],int m){
    int max=0;
    for(int i=0;i<m;i++){
        if(arr[i]>arr[max]) max=i;
    }
    return max;
}

// void print_arr(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


void solve()
{
    // code here
    int n;
    cin>>n;
    int m=n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while (m>1){
        //T chance
        int min_idx= min_i(arr,m);
        if(min_idx < m-1){
            update_arr(arr,min_idx,n);
            m--;
        }
        else{
            arr[min_idx]=0;
            m--;
        }
    //P chance
        if(m>1){
            int max_idx = max_i(arr, n);
            if (max_idx < m - 1)
            {
                update_arr(arr, max_idx, n);
                m--;
            }
            else
            {
                arr[max_idx] = 0;
                m--;
            }
        }
        else break;
    }

    cout<<arr[0]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int cases = 1;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        solve();
    }
}