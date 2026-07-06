// Last updated: 7/6/2026, 6:49:42 PM
class Solution {
public:
    int integerBreak(int n) {
        if (n <= 3) return n - 1;
        int res = 1;
        while (n > 4) {
            res *= 3;
            n -= 3;
        }
        return res * n;
    }
};