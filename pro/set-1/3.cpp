#include<bits/stdc++.h>

using namespace std;

int main(){
    string n1, n2;
    cin>>n1>>n2;
    int c = max(n1.length(), n2.length()) - min(n1.length(), n2.length());
    for(int i=0; i<min(n1.length(), n2.length()); i++){
        if(n1[i] == n2[i])
            continue;
        c++;
    }
    cout<<c;
    return 0;
}
