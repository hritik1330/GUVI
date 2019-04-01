#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string str;
int longestPalindrome(int z, int n, int i){
    if(z-i==-1 || z+i==n || str[z-i]!=str[z+i]){
        return 0;
    }
    if(str[z-i]=='|'){
        return longestPalindrome(z, n, i+1);
    }
    return 1+longestPalindrome(z, n, i+1);
}

int main(){
    string input;
    cin>>input;
    int n,max_length=0,pos,length;
    n = input.length();
    str="";
    for(int i=0; i<n-1; i++){
        str.push_back(input[i]);
        str.push_back('|');
    }
    str.push_back(input[n-1]);
    for(int i=0; i<str.length(); i++){
        length = 1+longestPalindrome(i,str.length(),1);
        if(max_length<length){
            max_length=length;
            pos = i;
        }
    }
    for(int i=pos-2*(max_length-1); i<pos+2*(max_length)-1; i++){
        if(str[i]!='|')
            cout<<str[i];
    }
    return 0;
}
