#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;

    vector<int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
    }
    sort(vect.begin(), vect.end());
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(find(vect.begin()+i, vect.end(), k-vect[i]) != vect.end()){
            flag = false;
            cout<<"yes";
            break;
        }
    }
    if(flag)
        cout<<"no";
    return 0;
}
