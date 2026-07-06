// Last updated: 7/6/2026, 6:51:00 PM
class Solution {
public:
    int trap(vector<int>& h) {
        int lmax=0;
        int rmax=0;
        int water=0;
        int l=0;
        int r=h.size()-1;
        
        while(l<r)
        {
            if(h[l]<h[r])
            {
                lmax=max(lmax,h[l]);
                water+= lmax-h[l];
                l++;
            }
            else
            {
                rmax=max(rmax,h[r]);
                water+= rmax-h[r];
                r--;
            }
        }
        return water;
    }
};