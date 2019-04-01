// Manacher's algorithm
#include<bits/stdc++.h>

using namespace std;

int longestPalindrome(int center, int z, string str){
    if(center-z==-1 || center+z==str.length() || str[center-z]!=str[center+z]){
        return 0;
    }
    if(str[center-z]=='|'){
        return longestPalindrome(center, z+1, str);
    }
    return 1+longestPalindrome(center, z+1, str);
}

void printPalindromes(string str){
    int length;
    string new_string  = "";
    string output = "";

    set<string> s;
    s.insert("");
    for(int z=0; z<str.length()-1; z++){
        new_string.push_back(str[z]);
        new_string.push_back('|');
    }
    new_string.push_back(str[str.length()-1]);
    for(int z=0; z<new_string.length(); z++){
        length = longestPalindrome(z, 1, new_string);
        if(1<length){
            int start = z - length*2, finish = z + length*2 + 1;
            while(start < finish){
                output = "";
                for(int k=start; k<finish; k++){
                    if(new_string[k] != '|')
                        output.push_back(new_string[k]);
                }
                start += 2;
                finish -= 2;
                if(output.length()>1)
                    s.insert(output);
            }
        }
    }
    s.erase(s.find(""));
    vector<string> out;
    for(auto it = s.begin(); it!=s.end(); it++){
        out.push_back(*it);
    }
    sort(out.begin(), out.end(), [](string s1, string s2){
        if(s1.length()==s2.length())
            return s1 < s2;
        return s1.length()<s2.length();
    });
    for(int z=0; z<out.size(); z++){
        cout<<out[z]<<endl;
    }
}

int main(){
    string input;
    cin>>input;
    printPalindromes(input);
    return 0;
}
