/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == NULL || headB == NULL)
			return NULL;
		map<ListNode*, int>m;
		ListNode* p = headA;
		int flag = 0;
		while (p)
		{
			m[p] = 1;
			p = p->next;
		}
		p = headB;
		while (p)
		{
			if (m.find(p) != m.end())
			{
				flag = 1;
				break;
			}
			p = p->next;
		}
		if (flag)
			return p;
		else
			return NULL;
	}
};