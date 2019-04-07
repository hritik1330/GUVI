#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, temps;
    cin>>n;
    vector<int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
    }
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int t=j+1; t<n; t++){
                if(vect[i]+vect[j]==vect[t])
                    cout<<vect[i]<<" "<<vect[j]<<" "<<vect[t]<<endl;
            }
        }
    }
    return 0;
}
