#include<bits/stdc++.h>
using namespace std;

class segtree{
	int *trees, n;
public:
	segtree(int n=100000){
		trees = new int[2*n];
	}
	void buildTree(vector<int> vec) {
	    this->n = vec.size();
		for (int i=0; i<vec.size(); i++)
			trees[n+i] = vec[i];
		for (int i=n-1; i>0; --i)
			trees[i] = min(trees[i<<1], trees[i<<1 | 1]);
	}
	void updateTreeNodes(int p, int values) {
		trees[p+n] = values;
		p = p+n;
		for (int i=p; i>1; i>>=1)
			trees[i>>1] = min(trees[i], trees[i^1]);
	}
	int sum(int l, int r){
		int res = min(trees[l+n], trees[r+n]);
		for(l+=n, r+=n; l<r; l>>=1, r>>=1) {
			if(l&1)
				res = min(res, trees[l++]);
			if (r&1)
				res = min(res,trees[--r]);
		}
		return res;
	}
};

int main(){
	int n, queryies, l, r;
	cin>>n>>queryies;

	vector<int> vec(n);
	for(int i=0; i<n; i++)
		cin>>vec[i];

	segtree trees;
	trees.buildTree(vec);
	for(int i=0; i<queryies; i++){
        cin>>l>>r;
        l--;
        r--;
        cout<<trees.sum(l,r)<<endl;
	}
	return 0;
}
