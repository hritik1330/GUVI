#include<bits/stdc++.h>
using namespace std;

string equalAveragePartition(vector<int> arr){
	int sums = 0;
	int n = arr.size();
	for(int i = 0; i < n; i++)
		sums += arr[i];

	int lsums = 0;
	for(int i = 0; i < n-1; i++){
		lsums += arr[i];
		int rsums = sums - lsums;
     	if (lsums * (n - i - 1) == rsums * (i + 1)) {
			return "yes";
		}
	}
  	return "no";
}

int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    cout<<equalAveragePartition(vec)<<endl;
	return 0;
}
