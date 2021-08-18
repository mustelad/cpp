class Solution {
	public:
		int romanToInt(string s) {
			int result = 0;
			int temp;
			char roman[] = {'I','V','X','L','C','D','M'};
			int *arr = new int(s.size());
			int numerical[] = {1,5,10,50,100,500,1000};
					for (int i=0;i<s.size();i++) {
						for (int j=0; j<7;j++)
							if (s[i]==roman[j]) arr[i]=j;	
					}
			for (int i=s.size()-1;i>=0;i--) {
				if (i==0) {
					result = result + numerical[arr[i]];
				}
				if (arr[i] > arr[i-1]) {
					result = result + numerical[arr[i]] - numerical[arr[i-1]];
					i--;
				}
				else result = result + numerical[arr[i]];
			}
		return result;
		}
};
