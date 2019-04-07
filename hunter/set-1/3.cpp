#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<set>
using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(tmp==i)
            cout<<tmp<<" ";
    }
    return 0;
}
