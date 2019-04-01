#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string input;
    cin>>input;
    int z = 0;
    for( int i=0; i<input.size(); i++){
        z += (int)input[i];
    }
    cout<<z;
    return 0;
}
