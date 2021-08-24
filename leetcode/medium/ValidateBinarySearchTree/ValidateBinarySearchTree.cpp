
de {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <bits/stdc++.h>

using namespace std;
bool isBigger(TreeNode* r, int top, bool status);
bool isSmaller(TreeNode* r, int top, bool status);
bool newBST(TreeNode* r, bool status) {
    if (status == false) return false;
	if (r->right) {
		status *= isBigger(r->right, r->val, status);
        status *= newBST(r->right, status);//Check all the nodes on the right side of the node
	}
	if (r->left) {
		status *= isSmaller(r->left, r->val, status); //Check all the nodes on the left side of the node
        status *= newBST(r->left, status);
	}
	return status;
}
bool isBigger(TreeNode* r, int top, bool status) {
    if (status == false) return false;
 	if (r->val > top || r->val == 0) {
		if (r->right) {status *= isBigger(r->right, top, status);}
		if (r->left)  {status *= isBigger(r->left, top, status);}
	}
	else status = false;
	return status;
}

bool isSmaller(TreeNode* r, int top, bool status) {
    if (status == false) return false;
	if (r->val < top || r->val ==0) {
		if (r->right) {status *= isSmaller(r->right, top, status);}
		if (r->left) {status *= isSmaller(r->left, top, status);}
	}
	else status = false;
	return status;	
}


class Solution {
public:
	bool isValidBST(TreeNode* root) {
		bool status = true;
		status *= newBST(root, status);
		return status;	
	}
};





