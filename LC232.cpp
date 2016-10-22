class Queue {
public:
	// Push element x to the back of queue.
	stack<int> s;
	stack<int> s1;
	void push(int x) {
		s.push(x);
	}

	// Removes the element from in front of queue.
	void pop(void) {
		int x;
		int n = s.size();
		if (n == 0)
			return;
		if (n == 1)
		{
			s.pop();
			return;
		}
		while (s.size()>1)
		{
			x = s.top();
			s1.push(x);
			s.pop();
		}
		s.pop();
		while (!s1.empty())
		{
			x = s1.top();
			s.push(x);
			s1.pop();
		}
		return;
	}

	// Get the front element.
	int peek(void) {
		int x, ans;
		int n = s.size();
		if (n == 0)
			return 0;
		if (n == 1)
			return s.top();
		while (s.size()>1)
		{
			x = s.top();
			s1.push(x);
			s.pop();
		}
		ans = s.top();
		while (!s1.empty())
		{
			x = s1.top();
			s.push(x);
			s1.pop();
		}
		return ans;
	}

	// Return whether the queue is empty.
	bool empty(void) {
		return s.empty();
	}
};