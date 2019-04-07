#include<bits/stdc++.h>
using namespace std;

int numOfWays( string s, int l, int r){
    if(l==r)
        return 1;
    int xtra = 0;
    if(l+1<r && s[l]!='0' && stoi(s.substr(l, 2)) <= 26)
        xtra = numOfWays(s, l+2, r);
    return xtra + numOfWays(s, l+1, r);
}

int main(){
    string n;
    cin>>n;
    cout<<numOfWays(n, 0, n.size());
    return 0;
}
