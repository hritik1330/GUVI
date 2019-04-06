#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, str1;
    cin>>str>>str1;
    bool flags=false;
    for(int i=0; i<str.length()-1; i++){
        for(int j=0; j<str1.length()-1; j++){
            if(str.compare(i, 2, str1, j, 2) == 0){
                flags = true;
                break;
            }
        }
        if(flags)
            break;
    }
    if(flags)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
