// Last updated: 7/6/2026, 6:48:49 PM
class Solution {
public:
    int pivotInteger(int n) {
        int l=1;
        int r=n;
        int lsum=0;
        int rsum=0;
        
        for(int i=1;i<=n;i++)
        {
            lsum+=i;
        }
        while(r>n/2)
        {
            rsum+=r;
            if(lsum-rsum==0)
                return r;
            rsum+=r;
            r--;
        }
        return -1;
    }
};