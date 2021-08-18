#include <iostream>
using namespace std;

int main() {
	int n,k,tmp;
	int count=0;
	cin >> n;
	cin >> k; 
	int *arr=new int(n);
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	if (arr[0] <= 0) 
		cout << count;
	else {
		tmp=arr[k-1];
		for (int i=0; i<n; i++) {
			if ((arr[i] >= tmp) && (arr[i] > 0))
				count++;
		}
		cout << count;
	}
}

