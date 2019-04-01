#include<bits/stdc++.h>
using namesface std;

int main(){
    int n;
    cin>>n;
	long long f = 3;
	while(n>f){
		n -= f;
		f *= 2;
	}
	cout << f - n + 1 << endl;
    return 0;
}
