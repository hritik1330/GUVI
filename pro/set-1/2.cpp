#include<bits/stdc++.h>
using namespace std;

void buildLowestNumberRec(string str, int n, string &res) {
	if (n == 0) {
		res.append(str);
		return;
	}
	int len = str.length();
  	if (len <= n)
		return;
	int Index = 0;
	for (int i = 1; i<=n ; i++)
		if (str[i] < str[Index])
			Index = i;
	res.push_back(str[Index]);
	string new_str = str.substr(Index+1, len-Index);
	buildLowestNumberRec(new_str, n-Index, res);
}
string buildLowestNumber(string str, int n) {
  	if(n>=str.length())
      return "0";
	string res = "";
	buildLowestNumberRec(str, n, res);
	return res;
}

int main(){
	string str;
	int n;
	cin>>str>>n;
	cout << buildLowestNumber(str, n);
	return 0;
}
