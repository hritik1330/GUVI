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
    vector<int> vec1(n);
    for(int i=0; i<n; i++){
        cin>>vec1[i];
    }
    sort(vec1.begin(), vec1.end());
    set<int> s;
    for(int i=1; i<n; i++){
        if(vec1[i]==vec1[i-1])
            s.insert(vec1[i]);
    }
    if(s.size() == 0)
        cout<<"unique";
    for(auto i : s){
        cout<<i<<" ";
    }
}
