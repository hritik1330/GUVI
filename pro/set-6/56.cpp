#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, k, tmp, free_time=0, dayss=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(free_time<k){
            free_time += 86400-tmp;
            dayss++;
        }
    }
    cout<<dayss;
    return 0;
}
