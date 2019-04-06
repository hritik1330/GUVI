#include<bits/stdc++.h>
using namesface std;

int main(){
    int n;
    cin>>n;
	long long t = 3;
	while(n>t){
		n -= t;
		t *= 2;
	}
	cout << t - n + 1 << endl;
    return 0;
}
