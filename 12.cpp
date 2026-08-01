#include <string>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        static const std::vector<std::pair<int, std::string>> table = {
            {1000, "M"},  {900, "CM"}, {500, "D"},  {400, "CD"},
            {100,  "C"},  {90,  "XC"}, {50,  "L"},  {40,  "XL"},
            {10,   "X"},  {9,   "IX"}, {5,   "V"},  {4,   "IV"},
            {1,    "I"}
        };
        int index = 0;
        std::string roman;
        while (num > 0)
        {
            if ( num >= table[index].first)
            {
                roman += table[index].second;
                num -= table[index].first;
            }
            else
            {
                index += 1;
            }
        }
        return roman;
    }
};

int main()
{
    Solution solution;
    int num = 3749;
    solution.intToRoman(num);
    return 0;
}