// Last updated: 7/6/2026, 6:48:59 PM
class Solution {
public:
    int minPairSum(vector<int>& n) {
        sort(n.begin(), n.end());
        int mx=0;
        int i=0;
        int j=n.size()-1;
        while(i<j)
        {
            mx=max(mx,(n[i]+n[j]));
            i++;
            j--;
        }
        return mx;
    }
};