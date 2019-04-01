#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

string LCSSubStr(string A, string B){
    int n=A.size(), m=B.size();
    int continuous[n+1][m+1] = {0}, max = 0, pos;
    string return_str = "";
    for(int z=1; z<=n; z++){
        for(int j=1; j<=m; j++){
            if(A[z-1]==B[j-1]){
                continuous[z][j] = continuous[z-1][j-1] + 1;
            }
            if(max<continuous[z][j]){
                max = continuous[z][j];
                pos = z;
            }
        }
    }
    for(int z=pos-max; z<pos; z++){
        return_str += (A[z]);
    }
    return return_str;
}

int main(){
    string A, B;
    cin>>A>>B;
    cout<<LCSSubStr(A,B)<<endl;
    return 0;
}
