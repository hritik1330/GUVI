#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int vec[x];
    for(int i=0; i<x; i++){
        cin>>vec[i];
    }
    for(int i=x-1; i>0; i--){
        cout<<vec[i]<<"->";
    }
    cout<<vec[0];
    return 0;
}
