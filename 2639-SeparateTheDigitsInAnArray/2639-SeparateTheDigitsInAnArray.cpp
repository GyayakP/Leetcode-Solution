// Last updated: 7/6/2026, 6:48:46 PM
class Solution {
public:
    vector<int> separateDigits(vector<int>& n) {
        vector<int> a;
        for(int val:n)
        {
            string s=to_string(val);
            for(char pt:s)
            {
                int x=pt-'0';
                a.push_back(x);
            }
        }
        return a;
    }
};