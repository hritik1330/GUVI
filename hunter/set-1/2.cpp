#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, temps;
    cin>>n;
    vector<int> arr(n);
    string output="";
    for(int i=0; i<n; i++){
        cin>>temps;
        arr[i]=temps;
    }
    sort(arr.begin(), arr.end());
    for(int i=n-1; i>-1; i--){
        output += to_string(arr[i]);
    }
    cout<<output;
    return 0;
}
