#include <iostream>
using namespace std;

int main() {
	int a,b;
	int i=0;
	int years;
	cin >> a >> b;
	while ( a <= b) {
		i++;
		a=a*3;
		b=b*2;	
	}
	cout << i;
}
