#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max=0, poss1=-1;
    cin >> n;

    vector<int> vec(n);
    for( int i=0; i<n; i++ ){
        cin >> vec[i];
        if( max < vec[i] ){
            max = vec[i];
            poss1 = i;
        }
    }

    stack<int> s;
    s.push(vec[n-1]);
    for(int i=n-2; i>=poss1; i--){
        if(s.top() <= vec[i]){
            s.push(vec[i]);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<max;
    return 0;
}
