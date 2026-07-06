// Last updated: 7/6/2026, 6:48:48 PM
class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;
        
        while(i<s.size())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;           
             }
        }
        return t.size()-j;
    }
};