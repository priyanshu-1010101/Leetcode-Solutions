
class Solution {
public:
    int reverse(int x) {
        long long res = x;
        if (x < 0) x = -(long long)x;

        long long num = 0;

        while (x > 0) {
            int temp = x % 10;
            num = num * 10 + temp;
            x = x / 10;
        }

        if (res < 0) num = -num;

        if (num < INT_MIN || num > INT_MAX)
            return 0;

        return (int)num;
    }
};
