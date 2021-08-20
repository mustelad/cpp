#include <bits/stdc++.h>

using namespace std;

int main() {
	// solution comes here
	// Time complexity O(n)
	for (int i=0; i < n; i++) {
		if (array[i] == x) {
			// x found at index i
		}
	}

	// binary search: 0(log n) time
	
	int a = 0, b = n-1;
	while (a <= b) {
		int k = (a+b)/2;
		if (array[k] == x) {
			//x fonud index k
		}
		if (array[k] > x)  b = k -1;
		else a = k+1;
	}

	// binary search - jumps n/2 n/4 n/8 etc
	
	int k=0;
	for (int b = n/2; b >=1 b /=2) {
		while (k+b < n && array[k+b] <=x) k+=b;
	}
	if (array[k] == x) {
		// x found at index k
	}

	// lower_bound() returns pointer to the first array elemnt whose value is at leats x
	// upper_bound() returns pointer to the first array elemnt whose value is larger than x
	// esqual_rang() returns both above pointers
	auto k = lower_bound(array, array+n,x)-array;
	if (k < n && array[k] == x) {
		//x found at index k
	}
	// the followig code counts the number of elements x
	auto a = lower_bound(array, array+n, x);
	auto b = upper_bound(array, array+n, x);
	count << b-a << "\n";
	// using equal range the code becomes shorter
	auto r = equal_range(array, array+n, x);
	cout << r.second - r.first << "\n";

	// Finding the smallest solution.
	int x = -1;
	for (int b = z; b>=1; b/=2) {
		while (!ok(x+b) x+=b;
	}
	int k = x+1;

	// Finding the maximum value
	int x = -1;
	for (int b = z; b >= 1; b /= 2) {
		while (f(x+b) < fx(x+b+1)) x+=b;
	}
	int k = x+1;
}



