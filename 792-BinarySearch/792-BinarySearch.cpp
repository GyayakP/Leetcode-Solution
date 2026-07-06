// Last updated: 7/6/2026, 6:49:22 PM
class Solution {
public:
    int search(vector<int>& n, int t) {
        int i=0;
        int j=n.size()-1;
        int mid;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(n[mid]==t)
                return mid;
            else if(n[mid]>t)
            {
                j=mid-1;
            } 
            else
                i=mid+1;
        }
        return -1;
        
    }
};