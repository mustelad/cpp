#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string str;
	cin >> str;
	if (islower(str[0])) {
	cout << char(toupper(str[0]));
	}
	else cout << str[0];
	for (int i=1; i<str.length(); i++) {
		cout << str[i];
	}
}
