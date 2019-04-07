#include<bits/stdc++.h>
using namespace std;

set<string> set11;

void swapper(string &s,int a,int b){
    char temp=s[a];
    s[a]=s[b];
    s[b]=temp;
}

void permuter(string &s,int l,int r){
    if(l==r){
        set11.insert(s);
        return;
    }
    for(int i=l;i<=r;i++){
        swapper(s,l,i);
        permuter(s,l+1,r);
        swapper(s,l,i);
    }
}

int main(){
    string s;  cin>>s;
    permuter(s,0,s.length()-1);
    for(auto i : set11){
        cout<<i<<endl;
    }
}
