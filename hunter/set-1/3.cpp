#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<set>
using namespace std;

int main(){
    int n, temps;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temps;
        if(temps==i)
            cout<<temps<<" ";
    }
    return 0;
}
