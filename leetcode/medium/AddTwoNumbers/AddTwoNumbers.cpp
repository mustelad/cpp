

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* result = new ListNode(0);
		ListNode* tmpNode = result;
		int extra = 0;
		int tmp;
		while (l1 || l2) {
			if (l1 && l2) {
				tmp = l1->val + l2->val + extra;
				if (tmp >= 10) {
					tmp-=10;
					extra=1;
				}
				else extra=0;
				l1=l1->next;
				l2=l2->next;
			} else {
				if (l1 && !l2) {
					tmp = l1->val+extra;
					if (tmp >= 10) {
						tmp-=10;
						extra=1;
					}
					else extra=0;
					l1=l1->next;
				}
				else { 
					if (!l1 && l2) {
						tmp = l2->val+extra;
						if (tmp >= 10) {
							tmp-= 10;
							extra=1;
						}
						else {extra = 0;}
						l2=l2->next;
					} 
				}
			}
			if (l1 || l2 || extra) {
            ListNode* node = new ListNode(0);
			tmpNode->val = tmp;
		    tmpNode->next = node;
            tmpNode = tmpNode->next;
            }
            else tmpNode->val = tmp;
		}
		if (extra) {
			tmpNode->val = extra;
            extra = 0;
		}
		return result;
	}

};

