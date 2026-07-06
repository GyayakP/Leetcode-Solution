// Last updated: 7/6/2026, 6:50:12 PM
class Solution {
public:
    int hammingWeight(int n) {
        int c=0;
        while (n)
        {
            n=n&(n-1);
            c++;
        }
        return c;
    }
};