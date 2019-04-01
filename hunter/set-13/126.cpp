#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    string z;
    bool flag=false;
    getline(cin,z);
    for(int i=0; i<z.length(); i++){
        if(isupper(z[i]) && (i==0 || z[i-1]==' ')){
            flag=true;
        }
    }
    if(flag){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}
