#include<bits/stdc++.h>
using namespace std;

void changeRowscolss(int rows, int cols, vector<vector<int>> &vec){
    for(int i=0; i<vec.size(); i++)
        vec[i][cols] = 0;
    for(int i=0; i<vec[rows].size(); i++)
        vec[rows][i] = 0;
}

int main(){
    int rows, cols;
    cin>>rows>>cols;

    vector<vector<int>> vec(rows, vector<int>(cols));
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>vec[i][j];
            if(vec[i][j]==0)
                vec[i][j] = INT_MAX;
        }
    }

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            if(vec[i][j] == INT_MAX)
                changeRowscolss(i, j, vec);

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
