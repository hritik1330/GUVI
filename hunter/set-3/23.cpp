#include<bits/stdc++.h>
using namespace std;

int getMaximumvalues(int rows, int column, vector<vector<int>> &vec){
    vector<vector<int>> val(rows+1, vector<int>(column+1));
    for(int i=0; i<=rows; i++){
        for(int j=0; j<=column; j++){
            if(i==0 || j==0){
                val[i][j] = 0;
                continue;
            }
            val[i][j] = max(val[i][j-1], val[i-1][j]) + vec[i-1][j-1];
        }
    }
    return val[rows][column];
}

int main(){
    int rows, column;
    cin>>rows>>column;

    vector<vector<int>> vec(rows, vector<int>(column));
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cin>>vec[i][j];
        }
    }
    cout<<getMaximumvalues(rows, column, vec);
    return 0;
}
