#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max=0, first_pos=-1;
    cin >> n;

    vector<int> vect(n);
    for( int i=0; i<n; i++ ){
        cin >> vect[i];
        if( max < vect[i] ){
            max = vect[i];
            first_pos = i;
        }
    }

    stack<int> s;
    s.push(vect[n-1]);
    for(int i=n-2; i>=first_pos; i--){
        if(s.top() <= vect[i]){
            s.push(vect[i]);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<max;
    return 0;
}
