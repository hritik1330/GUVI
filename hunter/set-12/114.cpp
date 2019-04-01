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

vector<bool> primeNumbers(){
    vector<bool> primes(46, false);
    for(int i=2; i<=45; i++){
        primes[i]=isPrime(i);
    }
    return primes;
}

int digitSum(int z){
    if(z<10)
        return z;
    return z%10 + digitSum(z/10);
}

int main(){
    vector<bool> primes = primeNumbers();
    int a, b, count=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        count += primes[digitSum(i)];
    }
    cout<<count;
    return 0;
}
