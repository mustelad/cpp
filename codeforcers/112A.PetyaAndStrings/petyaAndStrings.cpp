#include <iostream>
#include <string>
using namespace std;

int main() {
	string first;
	string second;
	cin >> first;
	cin >> second;
	for (int i=0; i<first.length(); i++) {
		if ( tolower(first[i]) != tolower(second[i])) 
			if (tolower(first[i]) < tolower(second[i])) {cout << -1; return 0;}
			else {cout << 1; return 0;}
	}
	cout << 0;
		
}
