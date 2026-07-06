// Last updated: 7/6/2026, 6:49:20 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int i=1;
        int j=arr.size()-1; 
        while(i<j)
        {
            int mid=i+(j-i)/2;
            
            if(arr[mid]<arr[mid+1])
            {
                i=mid+1;
            }
            else 
            {
                j=mid;
            }
            
        }
        return i;
        
    }
};