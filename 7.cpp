class Solution {
public:
    int reverse(int x) {
        if (x == __INT32_MAX__ * -1 - 1) return 0;
        bool negative = false;
        int y = 0;
        int limit = __INT32_MAX__ / 10;
        if(x < 0)
        {
            negative = true;
            x *= -1;
        }
        while (x > 0)
        {
            if (y <= limit)
            {
                y *= 10;
                y += x % 10;
                x /= 10;
            }
            else
            {
                return 0;
            }
        }
        return negative ? -y : y;
    }
};