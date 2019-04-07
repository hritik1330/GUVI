#include<bits/stdc++.h>
using namespace std;

int main(){
    string strn;
    getline(cin, strn);
    istringstream s(strn);
    vector<string> st;
    do{
        s>>strn;
        st.push_back(strn);
    }while(s);
    for(int i=0; i<st.size()-1; i++){
        reverse(st[i].begin(), st[i].end());
        cout << st[i] << " ";
    }
    return 0;
}
