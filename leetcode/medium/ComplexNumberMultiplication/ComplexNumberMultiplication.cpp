#include <bits/stdc++.h>

using namespace std;

pair<int, int> returnCF(string num) {
	string::size_type sz;
	auto pos1 = num.find("+");
	auto pos2 = num.find("i");
	int k = stoi(num.substr(0,pos1), &sz);
	int n = stoi(num.substr(pos1+1,pos2), &sz);
	return make_pair(k,n);
}
class Solution {
public:
	string complexNumberMultiply(string num1, string num2) { 
		pair<int, int> pair1 = returnCF(num1);
		pair<int, int> pair2 = returnCF(num2);
		return to_string(pair1.first*pair2.first - pair.second*pair2.second) + "+" + to_string(pair1.second*pair2.first + pair2.second*pair1.first) + "i";
	}
};

int main() {
	// solution comes here

}

