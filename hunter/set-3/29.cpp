#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, summtion=0, temp; // empty sub array
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp>0)
            summtion += temp;
    }
    cout<<summtion;
    return 0;
}
