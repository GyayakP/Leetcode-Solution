// Last updated: 7/6/2026, 6:50:57 PM
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;

        long long power = abs((long long)n);

        while (power>0) {
            if (power%2==1) 
            {
                ans*=x;
                power--;
            } 
            else 
            {
                x*=x;
                power /= 2;
            }
        }

        if (n < 0) 
        {
            return 1/ans;
        }
        return ans;
    }
};