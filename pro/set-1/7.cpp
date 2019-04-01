#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int logn = log2(n);
    if(pow(2, logn) == n)
        cout<<0;
    else
        cout<<pow(2, logn+1) - n;
    return 0;
}
