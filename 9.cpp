#include <cstdio>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) return true;
        if(x < 0) return false;
        if (x % 10 == 0) return false;
        int ref = 0;
        while (ref < x)
        {
            ref *= 10;
            ref += x%10;
            x /= 10;

        }
        return (ref == x || ref/10 == x);
    }
};


int main()
{
    Solution sol;
    int x = 121;
    sol.isPalindrome(x);
    return 0;
}

}