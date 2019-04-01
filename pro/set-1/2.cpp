#include<bits/stdc++.h>
using namespace std;

void buildLowestNumberRec(string st, int n, string &rs) {
	if (n == 0) {
		rs.append(st);
		return;
	}
	int len = st.length();
  	if (len <= n)
		return;
	int ind = 0;
	for (int i = 1; i<=n ; i++)
		if (st[i] < st[ind])
			ind = i;
	rs.push_back(st[ind]);
	string new_str = st.substr(ind+1, len-ind);
	buildLowestNumberRec(new_str, n-ind, rs);
}
string buildLowestNumber(string st, int n) {
  	if(n>=st.length())
      return "0";
	string rs = "";
	buildLowestNumberRec(st, n, rs);
	return rs;
}

int main(){
	string st;
	int n;
	cin>>st>>n;
	cout << buildLowestNumber(st, n);
	return 0;
}
