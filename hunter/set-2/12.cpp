#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> ab(n);
    for(int i=0; i<n; i++){
        cin>>ab[i];
    }
    sort(ab.begin(), ab.end(), greater<int>());
    cout<<ab[k-1];
    return 0;
}
