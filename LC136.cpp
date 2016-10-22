class Solution {
public:
	int singleNumber(vector<int>& nums) {
		map<int, int> m;
		int l = nums.size();
		for (int i = 0; i<l; i++)
		{
			if (m.find(nums[i]) != m.end())
				m[nums[i]]++;
			else
				m[nums[i]] = 1;
		}
		for (int i = 0; i<l; i++)
			if (m[nums[i]] == 1)
				return nums[i];
		return 0;
	}
};