#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int logarithmicn = log2(num);
    if(pow(2, logarithmicn) == num)
        cout<<0;
    else
        cout<<pow(2, logarithmicn+1) - num;
    return 0;
}
