#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string str;
int largestPallindrome(int centers, int n, int i){
    if(centers-i==-1 || centers+i==n || str[centers-i]!=str[centers+i]){
        return 0;
    }
    if(str[centers-i]=='|'){
        return largestPallindrome(centers, n, i+1);
    }
    return 1+largestPallindrome(centers, n, i+1);
}

int main(){
    string inputs;
    cin>>inputs;
    int n,max_length=0,length;
    n = inputs.length();
    str="";
    for(int i=0; i<n-1; i++){
        str.push_back(inputs[i]);
        str.push_back('|');
    }
    str.push_back(inputs[n-1]);
    for(int i=0; i<str.length(); i++){
        length = largestPallindrome(i,str.length(),1);

        if(str[i]=='|')
            length = length*2;
        else
            length = length*2 + 1;

        if(max_length<length)
            max_length=length;
    }

    cout<<inputs.size() - max_length;
    return 0;
}
