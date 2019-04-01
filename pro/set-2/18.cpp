#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, tempr, max_cnt=0;
    cin>>n>>m;

    vector<vector<int>> cnt(n+1, vector<int>(m+1));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>tempr;
            if(i==0 || j==0 || tempr == 0){
                cnt[i+1][j+1] = tempr;
            } else {
                cnt[i+1][j+1] = 1 + min({cnt[i][j+1] , cnt[i+1][j], cnt[i][j]});
            }
            max_cnt = max(max_cnt, cnt[i+1][j+1]);
        }
    }
    for(int i=0; i<max_cnt; i++){
        for(int j=0; j<max_cnt; j++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
