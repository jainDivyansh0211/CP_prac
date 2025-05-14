#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>

int main(){
    int n,m;
    int ncases;
    cin>>ncases;
    for(int i=0;i<ncases;i++){
        cin>>n>>m;
        if(n<m) cout<<"\nNo";
        else{
            if (((n-m)%2)==0) cout<<"\nYes";
        else{
            cout<<"\nNo";
        }
        }
    }
    return 0;
}