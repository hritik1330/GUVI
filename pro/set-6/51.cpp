#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
    }
    vector<int> arry1(n);
    arry1[n-1]=1;
    for(int i=n-2; i>=0; i--){
        if((vect[i]>0 && vect[i+1]<0) || (vect[i]<0 && vect[i+1]>0))
            arry1[i] = arry1[i+1]+1;
        else
            arry1[i] = 1;
    }
    for(int i=0; i<n; i++){
        cout<<arry1[i]<<" ";
    }
	return 0;
}
