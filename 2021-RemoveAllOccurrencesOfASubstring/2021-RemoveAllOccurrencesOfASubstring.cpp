// Last updated: 7/6/2026, 6:48:57 PM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.size();
        while(s.find(part)<s.size())
        {
            int i=s.find(part);
            s.erase(i,n);
        }
        return s;
    }
};