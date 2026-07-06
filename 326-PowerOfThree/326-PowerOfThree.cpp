// Last updated: 7/6/2026, 6:49:45 PM
class Solution {
public:
    bool isPowerOfThree(int n) {

        if (n <= 0)
            return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};