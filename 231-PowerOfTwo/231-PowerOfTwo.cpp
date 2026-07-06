// Last updated: 7/6/2026, 6:50:05 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        while(n!=1)
        {
            if(n%2!=0)
            {
                return false;
            }
            n=n/2;

        }
        return true;
    }
};