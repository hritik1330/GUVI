#include<bits/stdc++.h>
using namespace std;

int maxsumsWithoutNeighbours(vector<int> vect){
    int inc = vect[0];
    int exc = 0;
    int temp_exc = 0;
    for(int i=1; i<vec.size(); i++){
        temp_exc = max(inc , exc);
        inc = exc + vect[i];
        exc = temp_exc;
    }
    return max(inc, exc);
}

int main(){
    int n;
    cin>>n;
    vector<int> vect(n);
    for(int i=0; i<n; i++)
        cin>>vec[i];
    cout<<maxsumsWithoutNeighbours(vect);
    return 0;
}
