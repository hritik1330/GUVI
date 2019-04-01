#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, nonn = 1;
    cin>>n;
    vector<int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
    }
    sort(vect.begin(), vect.end());
    long int sum = vect[0];
    for(int i=1; i<n; i++){
        if(vect[i]>=sum)
            nonn++;
        sum += vect[i];
    }
    cout<<nonn<<endl;
	return 0;
}
