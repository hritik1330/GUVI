#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maximums=0;
    cin>>n;
    int arrys[n];
    for(int i=0; i<n; i++){
        cin>>arrys[i];
    }
    for(int i=0; i<n-1; i++){
        int count = 1, previous = arrys[i];
        for(int j=i+1; j<n; j++){
            if(arrys[j] > previous){
                previous = arrys[j];
                count++;
            }
        }
        maximums = max(maximums, count);
    }
    cout<<maximums<<endl;
    return 0;
}
