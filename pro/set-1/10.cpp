#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long int sumession = 0;
    cin>>n;
    vector<int> vect(n);
    vector<long int> sumession(n+1);
    sumession[0] = 0;
    for(int i=0; i<n; i++){
        cin>>vect[i];
        sumession[i+1] = 0;
        for(int j=0; j<i; j++){
            if(vect[i]>vect[j])
                sumession[i+1] += vect[j];
        }
        sumession += sumession[i+1];
    }
    cout<<sumession<<endl;
    return 0;
}
