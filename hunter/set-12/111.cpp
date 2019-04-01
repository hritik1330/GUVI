#include<iostream>
#include<algorithm>
#include<map>
#include<iterator>
using namespace std;

map<int,int> m;

int main(){
    int n, z, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>z;
            if(i==j){
                sum+=z;
            }
        }
    }
    cout<<sum;
    return 0;
}
