#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    vector<int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
    }
    sort(vect.begin(), vect.end());
    int min = INT_MAX;
    int a,b;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            tmp = vect[j] + vect[i];
            if(tmp<min && tmp>=0){
                min = tmp;
                a=vect[j];
                b=vect[i];
            }
        }
    }
    cout<<a<<" "<<b;
    return 0;
}
