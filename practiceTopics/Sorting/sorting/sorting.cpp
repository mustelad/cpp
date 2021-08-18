#include <bits/stdc++.h>

using namespace std;

int main() {
	// solution comes here
	vector<int> v = {4,2,5,3,5,8,3};
	sort(v.begin(),v.end());
	// for reverse sort(v.rbegin(),rend());
	for (auto it = v.begin(); it!=v.end(); it++){
		cout << *it << endl;
	}
	//ordinary array can be sorted out by: int a[]={1,..,n}; sort(a,a+n);
	// Same way can be used for string type
}

