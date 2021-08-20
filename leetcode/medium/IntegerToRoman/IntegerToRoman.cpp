#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		map<int, string> m;
			m[1] = "I";
			m[4] = "IV";
			m[5] = "V";
			m[9] = "IX";
			m[10] = "X";
			m[40] = "XL";
			m[50] = "L";
			m[90] = "XC";
			m[100] = "C";
			m[400] = "CD";
			m[500] = "D";
			m[900] = "CM";
			m[1000] = "M";
		string result = "";
		for ( auto x = m.rbegin(); x != m.rend(); ++x) {
			if ( num / x->first > 0) {
				int i = num / x->first;
				for (int k=0; k<i; k++) {
					result+=x->second;
				}
				num = num % x->first;
			}
		}
		return result;
	}
};



int main() {
	// solution comes here
	Solution test;
	int n;
	cin >> n;
	cout << test.intToRoman(n) ;
}

