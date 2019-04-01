#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int sum = 0;

int digitPow(int n){
    int z = 1;
    if(n<10){
        sum += 1;
        return 0;
    }
    z += digitPow(n/10);
    sum += pow(n%10, z);
    return z;
}

int main(){
    int n;
    cin>>n;
    int temp = digitPow(n);
    cout<<sum;
    return 0;
}
