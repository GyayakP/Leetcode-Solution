// Last updated: 7/6/2026, 6:50:40 PM
class Solution {
public:
    void sortColors(vector<int>& a) {
        int n =a.size();
        int mid=0, low=0, high=n-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[mid],a[low]);
                mid++;
                low++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
        }
        
    }
};