#include <iostream>
using namespace std;

int main() {
	int n,pet,vas,ton,total;
	int count=0;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> pet;
		cin >> vas; 
		cin >> ton;
		total=pet+vas+ton;
		if (total > 1)
			count++;
	}
	cout << count;
}
