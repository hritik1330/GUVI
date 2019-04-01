#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    vector<int> v;
    for(int z=0; z<n; z++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int z=0; z<n/2; z++){
        cout<<v[n-z-1]<<" "<<v[z]<<" ";
    }
    if(n%2){
        cout<<v[n/2];
    }
    return 0;
}
