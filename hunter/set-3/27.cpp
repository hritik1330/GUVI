#include<bits/stdc++.h>
using namespace std;

bool ispallind(string x) {
    if(x.length() <= 1)
        return true;
    if(x[0] == x[x.length()-1] && x.length()>0)
        return ispallind(x.substr(1,x.length()-2));
    return false;
}

int main(){
    string inputs;
    cin>>inputs;
    while(true){
        if(ispallind(inputs)){
            inputs = inputs.substr(0, inputs.length()-1);
        }else{
            break;
        }
    }
    cout<<inputs;
    return 0;
}
