#include <iostream>
using namespace std;


int main() {
	int n,counter;
	char current;
	string line;
	counter=0;
	cin >> n;
	cin >> line;
	current = line[0];
	for (int i=1; i<line.length(); i++) {
		if(line[i] == line[i-1]) {
			counter++;
		}		 
	}
	cout << counter;
}
