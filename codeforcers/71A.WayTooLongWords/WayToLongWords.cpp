#include <iostream>
#include <vector>
using namespace std; 

string shorten(const string& str) {
	string tmp;
	int mid=str.size()-2;
	if (str.size() > 10) {
		tmp=str[0];
		tmp+=to_string(mid);
		tmp+=str[mid+1];
		return tmp;
	}
	else return str;
}

int main() {
	int num;
	string  str;
	vector<string> array;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		array.push_back(shorten(str));
	}
	for (int i=0; i< num; i++) {
		cout << array[i] << endl;
	}
	return 0;
}

