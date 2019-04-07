#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
    }
    sort(vect.begin(), vect.end(), greater<int>());
    cout<<vect[k-1];
    return 0;
}
