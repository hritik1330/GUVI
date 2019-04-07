#include<bits/stdc++.h>
using namespace std;

int main(){
    string strn;
    getline(cin, strn);
    stack<char> s;
    int _size = strn.size()/2;
    for(int i=0; i<_size; i++)
        s.push(strn[i]);
    for(int i=strn.size() - _size; i<strn.size(); i++){
        char c=s.top();
        s.pop();
        if(c!=strn[i])
            break;
    }
    if(s.empty())
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
