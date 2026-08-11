#include <string>

class Solution {
public:
    int myAtoi(std::string s) {
    int size = s.size();
    int index = 0;
    int number = 0;
    bool negative = false;
    while (index < size && s[index] == ' ') index++;
    if(s[index] == 45)
    {
        negative = true;
        index ++;
    }
    else if (s[index] == 43)
    {
        negative = false;
        index ++;
    }

    while(index < size)
    {
        if (s[index] >= 48 && s[index] <= 57)
        {
            int digit = s[index] - 48;
            if (number > INT_MAX / 10 || (number == INT_MAX / 10 && digit > 7))
            {
                return negative ? INT_MIN : INT_MAX;
            }
            number *= 10;
            number += digit;
            index++;
        }
        else return negative ? number * -1 : number;

    }
    return negative ? number * -1 : number;
    }
};

int main()
{
    Solution sol;
    std::string s = "   -042";
    sol.myAtoi(s);
    return 0;
}