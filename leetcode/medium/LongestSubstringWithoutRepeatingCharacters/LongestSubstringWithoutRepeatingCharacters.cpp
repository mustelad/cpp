#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int count=0;
		string dmp="";
		for (auto i=0; i<(int)s.length(); i++) {
				auto pos = dmp.find(s[i]);
				cout << dmp << pos << endl;
				if (pos < s.length()) {
					if (dmp[pos+1]) {dmp = &dmp[pos+1]; dmp+=s[i];}
					else dmp = s[i];

				}
				else {
					dmp+=s[i];
					if (count < (int)dmp.length()) count = dmp.length();
				}
			}
			return count;
	}
};

int main() {
	// solution comes here
	Solution s;
	string c;
	cin >> c;
	cout << s.lengthOfLongestSubstring(c);
}

