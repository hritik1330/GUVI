#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, k, temps, free_time=0, days=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>temps;
        if(free_time<k){
            free_time += 86400-temps;
            days++;
        }
    }
    cout<<days;
    return 0;
}
