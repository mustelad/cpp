#include <iostream>
using namespace std;


int main() {
	string original;
	int* arr;
	int* fin;
	int size;
	int k=0;
	cin >> original;
	size = original.length() / 2 + 1;
	arr=new int(size);
	for (int i=0; i<original.length(); i=i+2) {
		arr[(i/2)]=original[i] - '0';
	}
	for (int i=1; i<4; i++) {
		for (int j=0;j<size; j++) {
			if (arr[j]==i) {
				if (k==0) cout << arr[j];
				else cout << "+" << arr[j];
				k++;
			}
		}
	}
}
