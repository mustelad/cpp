#include <bits/stdc++.h>

using namespace std;

  struct TreeNode {
  	int val;
  	TreeNode *left;
  	TreeNode *right;
  	TreeNode() : val(0), left(nullptr), right(nullptr) {}
  	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
void addToVector(TreeNode* root,vector<int> v, int i) {
	v.insert(v.begin() + i*2 - 1,root->left->val);
	if (root->left->left) addToVector(root->left, v, i*2);
	v.insert(v.begin() + i*2, root->right->val);
	if (root->right->right) addToVector(root->right, v, i*2+1);
}
bool checkBST(vector<int> v) {
	bool status = true;
	int size = log2(v.size() + 1);
	for (int i=0; i < v.size()/2 - 1 ; i++) {
		int currentLine = floor(log2(i+1));
		for (int j = currentLine + 1; j <= size; j++) {
			for (int k=0; k < 2^(j-currentLine); k++) {
				if(v[i] < v[2^j-1+k] || v[2^j-1+k]) status *= true;
				else return false;
			}
		} 
	}

}


class Solution {
public:	
	bool isValidBST(TreeNode* root) {
		vector<int> v;
		v.push_back(root->val);
		addToVector(root, v, 1);
		for (auto x : v) cout << x;
				
	}
};

