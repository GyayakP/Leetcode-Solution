// Last updated: 7/6/2026, 6:48:31 PM
class Solution {
public:
    int mirrorDistance(int n) {
        int ans=0;
        int a=n;
        while(n!=0)
        {
            ans*=10;
            ans=n%10+ans;
            n/=10;
        }
        ans=a-ans;
        if(ans<=0)
        {
            return ans*=-1;
        }
        else 
            return ans;
    }
};