// Last updated: 7/6/2026, 6:51:24 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s="";
        int n=strs.size()-1;
        for(int i=0;i<strs[0].size()&& i < strs[n].size();i++)
        {
            if(strs[0][i]!=strs[n][i])
            {
                return s;
            }
            else 
            {
                s+=strs[0][i];
            }

        }
        return s;
    }
};