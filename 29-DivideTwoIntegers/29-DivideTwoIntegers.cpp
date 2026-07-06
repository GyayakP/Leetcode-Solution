// Last updated: 7/6/2026, 6:51:12 PM
class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if ((long long)dividend/divisor>INT_MAX)
            return INT_MAX;
        else if((long long)dividend/divisor<INT_MIN)
            return INT_MIN;
        else
            return (long long)dividend/divisor;
            

        
    }
};