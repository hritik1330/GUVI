#include <bits/stdc++.h>
using namespace std;

string equalAveragePartition(vector<int> vect)
{
	int sums = 0;
	int n = vect.size();
	for (int i = 0; i < n; i++)
		sums += vect[i];

	int leftsums = 0;
	for (int i = 0; i < n - 1; i++)
	{
		leftsums += vect[i];
		int rightsums = sums - leftsums;
		if (leftsums * (n - i - 1) == rightsums * (i + 1))
		{
			return "yes";
		}
	}
	return "no";
}

int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	cout << equalAveragePartition(vec) << endl;
	return 0;
}
