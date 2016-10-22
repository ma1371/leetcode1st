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
	bool hasCycle(ListNode *head) {
		if (!head)
			return false;
		map<ListNode*, int> m;
		m[head] = 1;
		ListNode* p = head;
		while (p->next)
		{
			if (m.find(p->next) == m.end())
				m[p->next] = 1;
			else
				return true;
			p = p->next;
		}
		return false;
	}
};