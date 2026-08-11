#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0;
        int num = 1;
        for (int k = 1; k < nums.size(); ++k)
        {
            if (nums[k] != nums[k-1])
            {
                nums[num] = nums[k];
                num++;
            }
        }
        return num;
    }
};

int main()
{
    std::vector<int> nums = {1, 2, 2 ,3};
    Solution sol;
    sol.removeDuplicates(nums);
}