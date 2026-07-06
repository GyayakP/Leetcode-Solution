// Last updated: 7/6/2026, 6:50:22 PM
class Solution {
public:
    bool ispalin(string s)
    {
        string s2=s;
        reverse(s2.begin(),s2.end());

        return s2==s;
    }

    void palindrome(string s,vector<vector<string>>& ans,vector<string>& par)
    {
        if(s.size()==0)
        {
            ans.push_back({par});
            return;
        }
        for(int i=0;i<s.size();i++)
        {
            string part=s.substr(0,i+1);

            if(ispalin(part))
            {
                par.push_back(part);
                palindrome(s.substr(i+1),ans,par);
                par.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> par;

        palindrome(s,ans,par);
        return ans;
    }
};