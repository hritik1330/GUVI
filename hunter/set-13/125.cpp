#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    string z;
    cin>>z;
    int arr[50]={0};
    for(int i=0; i<z.length(); i++){
        arr[z[i]-65]+=1;
    }
    for(int i=0; i<z.length(); i++){
        if(arr[z[i]-65]==1)
            cout<<z[i];
    }
    return 0;
}
