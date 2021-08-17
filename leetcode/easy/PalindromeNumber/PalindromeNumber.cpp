class Solution {
public: 
	bool isPalindrome(int x) {
		int answer=0;
		int check = x;
		while(x) {
			if (answer>(INT_MAX/10) || answer<(INT_MIN/10) || x<0) return false;
			answer=answer*10+(x % 10);
			x = x/10;
		}
		if (answer == check) return true;
		else return false;
	}
};
