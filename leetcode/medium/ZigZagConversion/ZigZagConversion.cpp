#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
	string convert(string s, int numRows) {
		string result = "";
		if (s.size() <= 1 || numRows == 1) return s;
		for (int i=0; i<numRows; i++) {
			size_t next1 = numRows*2 - 2 - 2*i;
			size_t next2 = 2*i;
			size_t current = i;
			while (current < s.size()) {
				if (next1 != 0 && current < s.size()) {
					result += s[current];
					current += next1;
				}
				if (next2 != 0 && current < s.size()) {
					result += s[current];
					current += next2;
				}
			}
		}
	return result;
	}
};

int main() {
	// solution comes here
	Solution solution;
	string result;
        int k;
	cin >> result >> k;	
	result = solution.convert(result, k);
	cout << result;
	return 0;
}

