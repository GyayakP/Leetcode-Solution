// Last updated: 7/6/2026, 6:48:38 PM
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=0;
        int o=0;
        for(int i=1;i<=2*n;i++)
        {
            if(i%2==0)
                e=i+e;
            else
                o=i+o;  
        }
        while(e>0&&o>0)
        {
                if(e>o)
                    e=e%o;
                else
                    o=o%e;
        } 
        if(e==0) return o;
        return e;
    }
};