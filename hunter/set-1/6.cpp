#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
#include<map>
using namespace std;

int main(){
    int n, tmpfile;
    cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>tmpfile;
        if(m.find(tmpfile) == m.end())
            m.insert(make_pair(tmpfile, 1));
        else{
            m.clear();
            break;
        }
    }
    if(m.size()!=0){
        cout<<"UNIQUE";
    }else{
        cout<<tmpfile;
    }
    return 0;
}
