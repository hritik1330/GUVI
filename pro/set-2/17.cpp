#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    bool flags = true;
    for(int i=0; i<n-1; i++){
        if(find(vec.begin()+i, vec.end(), k-vec[i]) != vec.end()){
            flags = false;
            cout<<"yes";
            break;
        }
    }
    if(flags)
        cout<<"no";
    return 0;
}
