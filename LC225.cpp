class Stack {
public:
	// Push element x onto stack.
	vector<int> v;
	void push(int x) {
		v.push_back(x);
	}

	// Removes the element on top of the stack.
	void pop() {
		v.erase(v.end() - 1, v.end());
	}

	// Get the top element.
	int top() {
		return *(v.end() - 1);
	}

	// Return whether the stack is empty.
	bool empty() {
		if (v.size())
			return false;
		else
			return true;
	}
};