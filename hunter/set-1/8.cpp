#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, temps;
    cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int t=j+1; t<n; t++){
                if(vec[i]+vec[j]==vec[t])
                    cout<<vec[i]<<" "<<vec[j]<<" "<<vec[t]<<endl;
            }
        }
    }
    return 0;
}
