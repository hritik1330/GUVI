#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, temps;
    cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>temps;
        if(m.find(temps) == m.end())
            m.insert(make_pair(temps, 1));
        else
            m.erase(temps);
    }
    map<int,int>::iterator it = m.begin();
    cout << it->first;
    return 0;
}
