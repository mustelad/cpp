#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int arr[5][5];
	int moves;
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				moves=abs(2-i);
				moves=moves+abs(2-j);				
			}
		}
	}
	cout << moves;
}
