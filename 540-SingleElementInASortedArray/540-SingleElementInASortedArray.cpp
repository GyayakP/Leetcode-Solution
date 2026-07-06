// Last updated: 7/6/2026, 6:49:32 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int i=0;
        int j=a.size()-1;
        while(i<j)
        {
            int mid= i+(j-i)/2;
            if(mid%2==1)
                mid--;
            if (a[mid]==a[mid+1])
            {
                i=mid+2;
            }
            else 
                j=mid;
        }
        return a[i];
    }     
};