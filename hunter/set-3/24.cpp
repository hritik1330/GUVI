#include<bits/stdc++.h>
using namespace std;

bool isPossible(int n, vector<int> &vec, int x){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j)
                continue;
            if(vec[i] + vec[j] == x)
                return true;
        }
    }
    return false;
}

int main(){
    int n, x;
    cin>>n>>x;

    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    if(isPossible(n, vec, x))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
