// Last updated: 7/6/2026, 6:49:13 PM
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%5==0||k%2==0)
            return -1;
        
        int r=0;

        for(int i=1;i<=k;i++)
        {
            r=(r*10+1)%k;
            if(r==0)
                return i;
        }
        return -1;
    }
};