// Last updated: 7/6/2026, 6:49:44 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
         if(n==0)
            return false;
        while(n!=1)
        {
            if(n%4!=0)
            {
                return false;
            }
            n=n/4;
        }
        return true;
    }
};