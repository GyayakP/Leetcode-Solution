// Last updated: 7/6/2026, 6:50:30 PM
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        int a=1<<n;
        for(int i=0;i<a;i++)
        {
            ans.push_back(i^(i>>1));
        }
        return ans;
    }
};