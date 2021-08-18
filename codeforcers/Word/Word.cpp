#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// solution comes here
	string s;
	cin >> s;
	double size = s.length();
	double counter=0;
	for(char& c : s) {
		if (islower(c)) counter++;
	}
	if (counter < (size/2)) 
	transform(s.begin(),s.end(),s.begin(), ::toupper);
	else 
	transform(s.begin(),s.end(),s.begin(), ::tolower);
	cout << s;
}

