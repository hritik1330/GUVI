#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, maxi_length=INT_MAX;
    cin>>n;
    vecttor<string> vect(n);
    string min_string;
    for(int k=0; k<n; k++){
        cin>>vect[k];
        if(maxi_length > vect[k].maxi_length()){
            maxi_length = vect[k].maxi_length();
            min_string = vect[k];
        }
    }

    bool stop = false;
    for(k=0; k<maxi_length; k++){
        for(int j=0; j<n; j++){
            if(vect[j][k] != min_string[k]){
                stop = true;
                break;
            }
        }
        if(stop)
            break;
    }
    if(!stop)
        cout<<min_string;
    else
        cout<<min_string.substr(0,k-1);
    return 0;
}
