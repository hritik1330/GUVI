#include<bits/stdc++.h>
using namespace std;

long int getProduct(vector<long int> vect){
    long int pro = 1;
    for(int i=0; i<vect.size(); i++){
        pro *= vect[i];
    }
    return pro;
}

int main(){
    int n;
    cin>>n;

    vector<long int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
        if(vect[i]==0)
            vect[i]=1;
    }

    long int pro = getProduct(vect);

    for(int i=0; i<n; i++)
        cout<<(long int)pro/vect[i]<<" ";

    return 0;
}
