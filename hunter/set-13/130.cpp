#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int n){
    for(int z=2; z<=((int)sqrt(n)); z++){
        if(!(n%z))
            return false;
    }
    return true;
}
int main(){
    int n, sum=0;
    cin>>n;
    for(int z=3; z<=n; z+=10){
        if(isPrime(z))
            sum+=z;
    }
    cout<<sum;
    return 0;
}
