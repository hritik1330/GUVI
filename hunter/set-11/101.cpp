#include<bits/stdc++.h>
using namespace std;

bool is_this_prime(int z){
    for(int i=2; i<sqrt(z); i++){
        if(z%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int z;
    cin>>z;
    int arr[3];

    if(z&1){ arr[0] = 2; z -= 2;
    }else{ arr[0] = 3; z -= 3; }

    for(int i=2; i<z-1; i++){
        if(is_this_prime(i) && is_this_prime(z-i)){
            arr[1] = i;
            arr[2] = z-i;
            break;
        }
    }
    sort(arr, arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}
