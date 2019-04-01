#include<stdio.h>
#include<iostream>
using namespace std;

int knap(int W, int n, int w[], int valu[]) {
    int k[n+1][W+1] = {0};
    for(int i=0; i<=n; i++){
        for(int j=0; j<=W; j++){
            if( i == 0 || j == 0 )
                k[i][j] = 0;
            else if( w[i-1] <= j )
                k[i][j] = max( k[i-1][j-w[i-1]] + valu[i-1], k[i-1][j] );
            else
                k[i][j] = k[i-1][j];
        }
    }
    return k[n][W];
}

int main(){
    int n, w;
    cin>>n>>w;

    int wt[n];
    int valu[n];
    for(int i=0; i<n; i++)
        cin>>wt[i];
    for(int i=0; i<n; i++)
        cin>>valu[i];
	cout<<knap(w, n, wt, valu);
	return 0;
}
