// Last updated: 7/6/2026, 6:51:36 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int mx=0;
        set<char> x;
        for(int j=0; j<s.size(); j++)
        {
            while(x.contains(s[j]))
            {
                x.erase(s[i]);
                i++;
            }
            x.insert(s[j]);
            mx = max(mx, j-i+1);

        }
        return mx;
    }
};