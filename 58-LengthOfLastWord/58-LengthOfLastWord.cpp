// Last updated: 7/6/2026, 6:50:50 PM
class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int i=0;
        int j=s.size()-1;
        if(s.size()==2)
        {
            return 1;
        }
        
        while(j>=0)
        {
            if(s[j]==' ' && i==0)
            {
                j--;
            }
            else if(s[j]!=' ')
            {
                i++;
                j--;
                
            }
            else if(s[j]==' ' && i>0)
            {
                break;
            }
        }
        return i;
    }
};