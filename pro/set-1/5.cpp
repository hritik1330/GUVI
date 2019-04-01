#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,a,b;
    cin>>n>>a>>b;
    if((n/2)%(a+b)==0 && n%2==0)
        cout<<"YES";
    else if(a==b && (n/2)%a==0 && n%2==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
