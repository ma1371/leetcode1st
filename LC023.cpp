/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
struct cmp
{
	bool operator() (const ListNode* a, const ListNode* b)
	{
		return a->val > b->val;
	}
};
class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
		ListNode* head = new ListNode(0);
		int n = lists.size();
		for (int i = 0; i<n; i++)
		{
			while (lists[i])
			{
				pq.push(lists[i]);
				lists[i] = lists[i]->next;
			}
		}
		ListNode *p = head;
		while (!pq.empty())
		{
			p->next = new ListNode(0);
			p = p->next;
			p->val = pq.top()->val;
			pq.pop();
		}
		return head->next;
	}
};