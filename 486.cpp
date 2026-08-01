#include <cstdio>
#include <vector>

class Solution {
public:
    bool predictTheWinner(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<std::vector<int>> memory(n, std::vector<int>(n, INT_MIN));
        return maxDiff(nums, 0, n - 1, memory) >= 0;
    }

private:
    int maxDiff(std::vector<int>& nums, int left, int right,
                std::vector<std::vector<int>>& memory) {
        if (left == right) return nums[left];
        if (memory[left][right] != INT_MIN) return memory[left][right];

        int takeLeft  = nums[left]  - maxDiff(nums, left + 1, right, memory);
        int takeRight = nums[right] - maxDiff(nums, left, right - 1, memory);

        return memory[left][right] = std::max(takeLeft, takeRight);
    }
};

int main()
{
    Solution solution;
    std::vector<int> myNums = {1, 5, 2};
    solution.predictTheWinner(myNums);
    return 0;
}