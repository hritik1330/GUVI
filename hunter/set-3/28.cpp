#include<bits/stdc++.h>
using namespace std;

bool iispallin(string x) {
    if(x.length() <= 1)
        return true;
    if(x[0] == x[x.length()-1] && x.length()>0)
        return iispallin(x.substr(1,x.length()-2));
    return false;
}

int main(){
    string input;
    cin>>input;
    bool is_present[26] = {false};
    for(int i=0; i<input.length(); i++){
        if(is_present[input[i]-'a'])
            continue;
        cout<<input[i];
        is_present[input[i]-'a'] = true;
    }
    return 0;
}
