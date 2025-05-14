#include <iostream>
using namespace std;
#include<string>
#include<cstdlib>

string res(string normal_form){
    int h;
    string new_s;
    h=(10*(int(normal_form[0])-48)) + (int(normal_form[1])-48);
    if(h<12 && h!=0){
        new_s=normal_form + " AM";
    }
    else if(h>12){
        string t= to_string((h-12)*0.01);
        new_s=normal_form;
        new_s[0]=t[2];
        new_s[1]=t[3];
        new_s +=" PM";
    }
    else if(h==0){
        new_s=normal_form;
        new_s[0]='1';
        new_s[1]='2';
        new_s+= " AM";
    }
    else{
        new_s=normal_form+ " PM";
    }
    return new_s;

}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string normal;
        cin>>normal;
        string new_str=res(normal);
        cout<<new_str<<endl;
    }
}
