#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int count = max(s1.length(), s2.length()) - min(s1.length(), s2.length());
    for(int i=0; i<min(s1.length(), s2.length()); i++){
        if(s1[i] == s2[i])
            continue;
        count++;
    }
    cout<<count;
    return 0;
}
