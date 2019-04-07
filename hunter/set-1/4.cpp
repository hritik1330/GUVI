#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, tmp;
    cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(m.find(tmp) == m.end())
            m.insert(make_pair(tmp, 1));
        else
            m.erase(tmp);
    }
    map<int,int>::iterator it = m.begin();
    cout << it->first;
    return 0;
}
