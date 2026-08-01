#include <vector>
#include <string>
#include <cstdio>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        int index = 0;
        int minSize = strs[0].size();
        for (const auto& elemenst : strs)
        {
            if (elemenst.size() <  minSize)
            {
                minSize = elemenst.size();
            }
        }
        while (index < minSize)
        {
            char toCompare = strs[0][index];
            for(const auto& element : strs)
            {
                if(toCompare != element[index])
                {
                    return strs[0].substr(0, index);
                }

            }
            index += 1;
        }
        return strs[0].substr(0, index);
    }
};


int main()
{
    Solution solution;
    std::vector<std::string> strs = {"racecar","racecar","car"};
    solution.longestCommonPrefix(strs);
    return 0;
}