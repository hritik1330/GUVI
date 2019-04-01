#include <bits/stdc++.h>
using namespace std;

int findNRCS(string input) {
	int i, current_start = 0, current_length, length = 0;
	int start;
	map<char, int> m;
	m[input[0]] = 0;

	for (i = 1; i < input.length(); i++) {
		if (m.find(input[i]) == m.end())
			m[input[i]] = i;
		else {
			if (m[input[i]] >= current_start) {
              	current_length = i - current_start;
				if (length < current_length) {
					length = current_length;
					start = current_start;
				}
              	current_start = m[input[i]] + 1;
			}
			m[input[i]] = i;
		}
	}

	if (length < i - current_start) {
		length = i - current_start;
		start = current_start;
	}
	return (length - start);
}

int main() {
	string input;
	cin >> input;
	cout << findNRCS(input);
	return 0;
}
