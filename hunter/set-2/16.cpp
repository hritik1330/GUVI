#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, n1=INT_MAX, n2=INT_MAX, n3=INT_MAX, tempss;
    cin >> n >> k ;

    for( int i=0; i<n; i++ ){
        cin >> tempss;
        if(tempss==k)
            continue;
        if(abs(n1-k)>abs(tempss-k)){
            n3=n2;
            n2=n1;
            n1=tempss;
        }else if( abs(n2-k) > abs(tempss-k) ){
            n3=n2;
            n2=tempss;
        }else if( abs(n3-k) > abs(tempss-k) ){
            n3=tempss;
        }
    }
    cout<<n1<<" "<<n2<<" "<<n3;
    return 0;
}
