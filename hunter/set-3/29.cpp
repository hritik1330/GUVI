#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n, submission=0, temp; // empty sub array
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp>0)
            submission += temp;
    }
    cout<<submission;
    return 0;
}
