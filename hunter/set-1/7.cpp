#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if( (tmp+i)%2 )
            cout<<tmp<<" ";
    }
    return 0;
}
