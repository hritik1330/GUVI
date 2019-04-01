#include<bits/stdc++.h>
using namespace std;

int numberOfWayss( string s, int l, int r){
    if(l==r)
        return 1;
    int extra = 0;
    if(l+1<r && s[l]!='0' && stoi(s.substr(l, 2)) <= 26)
        extra = numberOfWayss(s, l+2, r);
    return extra + numberOfWayss(s, l+1, r);
}

int main(){
    string n;
    cin>>n;
    cout<<numberOfWayss(n, 0, n.size());
    return 0;
}
