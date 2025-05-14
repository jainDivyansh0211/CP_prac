#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    char ch='#';
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int side=2*n;
        for(int j=0;j<side;j++){
            for(int k=0;k<side;k++){
                cout<<ch;
                if(((k+1)%2)==0) {
                    if (((k + 1) / 2) % 2)  ch = '.';
                    else ch = '#';
                }
            }
            cout<<"\n";
            if(((j+1)%2)==0) {
                if (((j + 1) / 2) % 2) ch = '.';
                else ch = '#';
            }
        }
    }
}