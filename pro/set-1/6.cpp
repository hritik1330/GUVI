#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c = 0;
    cin>>n;
    vector<int> vect(n);
    for(int k=0; k<n; k++){
        cin>>vect[k];
    }

    for(int k=0; k<n-2; k++){
        for(int j=k+1; j<n-1; j++){
            if(vect[k] < vect[j]){
                for(int k=j+1; k<n; k++){
                    if(vect[j] < vect[k]){
                        c++;
                    }
                }
            }
        }
    }
    cout<<c;
    return 0;
}
