#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string x) {
    if(x.length() <= 1)
        return true;
    if(x[0] == x[x.length()-1] && x.length()>0)
        return isPalindrome(x.substr(1,x.length()-2));
    return false;
}

int main(){
    string input;
    cin>>input;
    while(true){
        if(isPalindrome(input)){
            input = input.substr(0, input.length()-1);
        }else{
            break;
        }
    }
    cout<<input;
    return 0;
}
