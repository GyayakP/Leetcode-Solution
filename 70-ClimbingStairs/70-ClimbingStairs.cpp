// Last updated: 7/6/2026, 6:50:43 PM
class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)
        {
            return n;
        }
        int l=2;
        int sl=1;
        int c;
        
        for(int i =3; i<=n;i++)
        {
            c=l+sl;
            sl=l;
            l=c;
        }
        return c;
        
        
    }
};