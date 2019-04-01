#include<iostream>
using namespace std;

int main(){
    int z;
    cin>>z;
    if(!(z&(z-1)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
