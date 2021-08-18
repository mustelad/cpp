#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	int x=0;
	string line;
	size_t found;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> line;
		found = line.find("++");
		if (found != string::npos) {
			x++;
		}	
		else x--;
	}
	cout << x;
}
