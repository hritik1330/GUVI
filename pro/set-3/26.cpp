#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maxs=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        int count = 1, previous = arr[i];
        for(int j=i+1; j<n; j++){
            if(arr[j] > previous){
                previous = arr[j];
                count++;
            }
        }
        maxs = max(maxs, count);
    }
    cout<<maxs<<endl;
    return 0;
}
