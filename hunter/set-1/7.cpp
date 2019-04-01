#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, temps;
    cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>temps;
        if( (temps+i)%2 )
            cout<<temps<<" ";
    }
    return 0;
}
