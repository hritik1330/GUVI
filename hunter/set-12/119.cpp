#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    long int z=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j]){
                z++;
            }
        }
    }
    cout<<z<<endl;
    return 0;
}
