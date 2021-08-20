#include <bits/stdc++.h>

using namespace std;
struct P {
	int x,y;
	bool operator<(const P &p) {
		if (x!=p.x) return x < p.x;
		else return y < p.y;
	}
};
// Comprison function
bool comp(string a,string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	return a < b;
}


int main() {
	// solution comes here
	// User defined struct do not have a comparison operator 'operator<' should be defined
	
}

