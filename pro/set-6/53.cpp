#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    bool visit[26];
    memset(visit, false, sizeof(visit));
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int total = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z' && !visit[s[i]-'a']){
            total++;
            visit[s[i]-'a'] = true;
        }
    }
    if(total==26)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
