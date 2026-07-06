// Last updated: 7/6/2026, 6:49:05 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> a (gain.size()+1,0);
        
        
        int mx=0;
        for(int i=1;i<=gain.size();i++)
        {
            a[i]=a[i-1]+gain[i-1];
            mx=max(a[i],mx);
            
        }
        return mx;
        
    }
};