#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    getline(cin, str1);
    istringstream s(str1);
    vector<string> st;
    do{
        s>>str1;
        st.push_back(str1);
    }while(s);
    for(int i=0; i<st.size()-1; i++){
        reverse(st[i].begin(), st[i].end());
        cout << st[i] << " ";
    }
    return 0;
}
