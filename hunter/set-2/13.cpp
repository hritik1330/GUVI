#include<bits/stdc++.h>
using namespace std;

int main(){
    string stri;
    getline(cin, stri);
    stack<char> s;
    int _size = stri.size()/2;
    for(int i=0; i<_size; i++)
        s.push(stri[i]);
    for(int i=stri.size() - _size; i<stri.size(); i++){
        char c=s.top();
        s.pop();
        if(c!=stri[i])
            break;
    }
    if(s.empty())
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
