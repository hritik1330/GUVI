#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int vect[x];
    for(int i=0; i<x; i++){
        cin>>vect[i];
    }
    for(int i=x-1; i>0; i--){
        cout<<vect[i]<<"->";
    }
    cout<<vect[0];
    return 0;
}
