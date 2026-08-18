class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        auto len = nums.size();
        if (k == len)
        {
            int max_val = 0;
            for (auto i = 0; i < len; i++)
            {
                if (nums[i] > max_val) max_val = nums[i];
            }
            return max_val;
        }
        int start = nums[0];
        int end = nums[len - 1];
        std::array<int, 51> numbers{};
        for (int liczba : nums)
        {
            numbers[liczba]++;
        }
        if (k > 1)
        {
            if (numbers[start] == 1 && numbers[end] == 1) return std::max(start, end);
            if(numbers[end] == 1) return end;
            else if(numbers[start] == 1) return start;
            else return -1;
        }
        else
        {
            for (int i = 50; i >= 0; i--)
            {
                if (numbers[i] == 1) return i;
            }
        }
        return -1;
    }
};