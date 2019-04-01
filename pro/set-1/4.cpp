#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;

    string min_str = min(s1, s2);
    string max_str = max(s1, s2);
    int i=0, c=0;

    for(i=0; i<min_str.length(); i++){
        if(s1[i] == s2[i])
            continue;
        c += abs(s1[i] - s2[i]);
    }

    while(i<max_str.length()){
        c += max_str[i] - 96;
        i++;
    }
    cout<<c;
    return 0;
}
