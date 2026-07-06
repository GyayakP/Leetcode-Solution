// Last updated: 7/6/2026, 6:49:52 PM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lb=1;
        int ub=n;
        while(lb<ub)
        {
            int mid=lb+(ub-lb)/2;
            if(isBadVersion(mid))
            {   
                ub=mid;
            }
            else
            {
                lb=mid+1;
            }
           
        }
        return lb;
    }
};