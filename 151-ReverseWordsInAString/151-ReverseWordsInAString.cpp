// Last updated: 7/6/2026, 6:50:18 PM
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";

        for(int i=0;i<s.size();i++)
        {
            string w="";
            while(i<s.size()&&s[i]!=' ')
            {
                w += s[i];
                i++;
            }
            reverse(w.begin(), w.end());
            if(w.size()>0)
                ans += ' '+w;
        }
        return ans.substr(1);
        

    }
};