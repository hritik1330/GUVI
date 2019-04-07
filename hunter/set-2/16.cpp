#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, n1=INT_MAX, n2=INT_MAX, n3=INT_MAX, tmp;
    cin >> n >> k ;

    for( int i=0; i<n; i++ ){
        cin >> tmp;
        if(tmp==k)
            continue;
        if(abs(n1-k)>abs(tmp-k)){
            n3=n2;
            n2=n1;
            n1=tmp;
        }else if( abs(n2-k) > abs(tmp-k) ){
            n3=n2;
            n2=tmp;
        }else if( abs(n3-k) > abs(tmp-k) ){
            n3=tmp;
        }
    }
    cout<<n1<<" "<<n2<<" "<<n3;
    return 0;
}
