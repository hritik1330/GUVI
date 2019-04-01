#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    string z, str2;
    cin>>z>>str2;
    int s1, s2;
    bool flag=false;
    s1 = z.length();
    s2 = str2.length();
    for(int i=0; i<s1-s2+1; i++){
        if(z.compare(i,s2,str2)==0){
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
