#include<bits/stdc++.h>

using namespace std;

int main(){
    string n1, n2;
    cin>>n1>>n2;

    string min_string = min(n1, n2);
    string max_string = max(n1, n2);
    int i=0, c=0;

    for(i=0; i<min_string.length(); i++){
        if(n1[i] == n2[i])
            continue;
        c += abs(n1[i] - n2[i]);
    }

    while(i<max_string.length()){
        c += max_string[i] - 96;
        i++;
    }
    cout<<c;
    return 0;
}
