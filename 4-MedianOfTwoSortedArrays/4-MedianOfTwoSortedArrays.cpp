// Last updated: 7/6/2026, 6:51:34 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        vector<int> c(a.size()+b.size());
        merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
        double x=0.0;
        int mid=c.size()/2;
        if(c.size()%2==0)
        {
            x=(c[mid]+c[mid-1])/2.0;
            return x;
        }
        else
        {
            x=c[mid];
            return x;
        }


    }
};