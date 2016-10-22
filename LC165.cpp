class Solution {
public:
	int compareVersion(string version1, string version2) {
		string tmp1 = version1;
		string tmp2 = version2;
		while (!tmp1.empty() || !tmp2.empty())
		{
			int it1, it2, flag1 = 0, flag2 = 0;
			it1 = tmp1.find('.', 0);
			it2 = tmp2.find('.', 0);
			if (it1 == string::npos)
			{
				it1 = tmp1.length();
				flag1 = 1;
			}
			if (it2 == string::npos)
			{
				it2 = tmp2.length();
				flag2 = 1;
			}
			while (tmp1[0] == '0')
			{
				tmp1.erase(tmp1.begin(), tmp1.begin() + 1);
				it1--;
			}
			while (tmp2[0] == '0')
			{
				tmp2.erase(tmp2.begin(), tmp2.begin() + 1);
				it2--;
			}
			if (it1>it2)
				return 1;
			if (it2>it1)
				return -1;
			for (int i = 0; i<it1; i++)
			{
				if (tmp1[i]>tmp2[i])
					return 1;
				else if (tmp1[i]<tmp2[i])
					return -1;
			}
			if (flag1 == 0)
				tmp1.erase(tmp1.begin(), tmp1.begin() + it1 + 1);
			else
				tmp1.erase(tmp1.begin(), tmp1.end());
			if (flag2 == 0)
				tmp2.erase(tmp2.begin(), tmp2.begin() + it2 + 1);
			else
				tmp2.erase(tmp2.begin(), tmp2.end());
		}
		if (tmp1.empty() && tmp2.empty())
			return 0;
		if (tmp1.empty())
			return -1;
		if (tmp2.empty())
			return 1;
		return 0;
	}
};