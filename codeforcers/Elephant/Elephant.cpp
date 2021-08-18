#include <bits/stdc++.h>

using namespace std;

int main() {
	// solution comes here
	int x;
	int step=5;
	int res=0;
	cin >> x;
	while (x!=0) {
		if (x / step > 0) {
			res = res + (x/step);
			x = x % step;			
		}
		step--;
	}
	cout << res;
}

