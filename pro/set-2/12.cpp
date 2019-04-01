#include<bits/stdc++.h>
using namespace std;

class segtree{
	int *trees, n;
public:
	segtree(int n=100000){
		trees = new int[2*n];
	}
	void buildTree(vector<int> vect) {
	    this->n = vect.size();
		for (int i=0; i<vect.size(); i++)
			trees[n+i] = vect[i];
		for (int i=n-1; i>0; --i)
			trees[i] = trees[i<<1] + trees[i<<1 | 1];
	}
	void updateTreeNode(int p, int value) {
		trees[p+n] = value;
		p = p+n;
		for (int i=p; i>1; i>>=1)
			trees[i>>1] = trees[i] + trees[i^1];
	}
	int sum(int l, int r){
		int result = 0;
		for(l+=n, r+=n; l<r; l>>=1, r>>=1) {
			if(l&1)
				result += trees[l++];

			if (r&1)
				result += trees[--r];
		}
		return result;
	}
};

int main(){
	int n, queries, l, r;
	cin>>n>>queries;

	vector<int> vect(n);
	for(int i=0; i<n; i++)
		cin>>vect[i];

	segtree trees;
	trees.buildTree(vect);
	for(int i=0; i<queries; i++){
        cin>>l>>r;
        l--;
        cout<<trees.sum(l,r)<<endl;
	}
	return 0;
}
