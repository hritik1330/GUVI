#include<bits/stdc++.h>
using namespace std;

void changeRowCol(int rooooww, int col, vector<vector<int>> &vec){
    for(int i=0; i<vec.size(); i++)
        vec[i][col] = 0;
    for(int i=0; i<vec[rooooww].size(); i++)
        vec[rooooww][i] = 0;
}

int main(){
    int rooooww, col;
    cin>>rooooww>>col;

    vector<vector<int>> vec(rooooww, vector<int>(col));
    for(int i=0; i<rooooww; i++){
        for(int j=0; j<col; j++){
            cin>>vec[i][j];
            if(vec[i][j]==0)
                vec[i][j] = INT_MAX;
        }
    }

    for(int i=0; i<rooooww; i++)
        for(int j=0; j<col; j++)
            if(vec[i][j] == INT_MAX)
                changeRowCol(i, j, vec);

    for(int i=0; i<rooooww; i++){
        for(int j=0; j<col; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
