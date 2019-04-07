#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<set>
using namespace std;

int main(){
    int n, temp1;
    cin>>n;
    vector<int> vect(n);
    for(int i=0; i<n; i++){
        cin>>vect[i];
    }
    sort(vect.begin(), vect.end());
    set<int> s;
    for(int i=1; i<n; i++){
        if(vect[i]==vect[i-1])
            s.insert(vect[i]);
    }
    if(s.size() == 0)
        cout<<"UNIQUE";
    for(auto i : s){
        cout<<i<<" ";
    }
}
