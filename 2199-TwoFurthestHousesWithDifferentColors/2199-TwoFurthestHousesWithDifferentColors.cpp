// Last updated: 7/6/2026, 6:48:54 PM
class Solution {
public:
    int maxDistance(vector<int>& c) {
        int i=0;
        int j=c.size()-1;
        int k;
        
        while(i<j)
        {
            if(c[i]!=c[j])
            {
                k=j-i;
                break; 
            }
            else
                j--;
        }
        i=0;
        j=c.size()-1;
        int p;
        while(i<j)
        {
            if(c[i]!=c[j])
            {
                p=j-i;
                break; 
            }
            else
                i++;
        }
        return max(p,k);
    }
};