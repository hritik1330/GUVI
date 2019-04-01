#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    cin>>n1;
    map<int,int> m;
    vector<int> vect(n1);
    for(int i=0; i<n1; i++){
        cin>>vect[i];
        if(m.find(vect[i])!=m.end())
            m[vect[i]] += 1;
        else
            m.insert(make_pair(vect[i], 1));
    }

    int candies = 1, sum = 0;
    for(map<int,int>::iterr it=m.begin(); it!=m.end(); it++){
        sum += it->second * candies;
        candies++;
    }
    cout<<sum;
    return 0;
}
