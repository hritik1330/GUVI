#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n1,p,q;
    cin>>n1>>p>>q;
    if((n1/2)%(p+q)==0 && n1%2==0)
        cout<<"YES";
    else if(p==q && (n1/2)%p==0 && n1%2==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
