#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vect(n);
    for(int i=0; i<n; i++)
        cin>>vect[i];

    sort(vect.begin(), vect.end(), [](int p, int q){
        bitset<16> b11(p), b2(q);
        if(b11.count()!=b2.count())
            return b11.count()>b2.count();
        else
            return p>q;
    });
    for(int i=0; i<n; i++){
        cout<<vect[i]<<endl;
    }
    return 0;
}
