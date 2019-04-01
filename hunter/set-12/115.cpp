#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<array>
using namespace std;

bool isPrime(int z){
    for(int i=2; i<=(int)sqrt(z); i++){
        if(!(z%i))
            return false;
    }
    return true;
}

vector<bool> primeNumbers(int z){
    vector<bool> primes(z+1, false);
    for(int i=2; i<=z; i++){
        primes[i]=isPrime(i);
    }
    return primes;
}

int main(){
    int z, i=2, max=1001, count=0;
    cin>>z;
    vector<bool> primes = primeNumbers(z-2);
    while( i<max ){
        if(primes[i] && primes[z-i]){
            count += 1;
            max = z-i;
            cout<<i<<" "<<z-i<<endl;
        }
        i++;
    }
    cout<<count;
    return 0;
}
