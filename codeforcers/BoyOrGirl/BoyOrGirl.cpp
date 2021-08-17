#include <iostream>
using namespace std;

int main() {
	string name;
	string comp;
	int count = 0;
	cin >> name;
	for (int i=0; i < name.size(); i++) {
		for (int j=i+1; j < name.size(); j++) {
			if (name[i] == name[j]) break;
			if (j == name.size() - 1) count++;
		}
	}
	if (count % 2 == 0) {
		cout << "IGNORE HIM!";
	}
	else cout << "CHAT WITH HER!";
	return 0;
}
