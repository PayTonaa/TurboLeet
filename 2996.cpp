#include <vector>
class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
    int sum = nums[0];
	auto length = nums.size();
	int position = 0;
        for (int i = 1; i < length; i++)
        {
        	if (nums[i] == nums[i-1] + 1)
        	{
        		sum+= nums[i];
        	}
        	else {position = i; break;};
        }
    int i = position;
	for (int i = 0; i < length; i++)
	{
		if (sum == nums[i]) {sum++; i = -1;}
	}
	return sum;

    }
};

int main()
{
    Solution solution;
    std::vector<int> myNums = {3, 4, 5, 1, 12, 14, 13};
    solution.missingInteger(myNums);
    return 0;
}

