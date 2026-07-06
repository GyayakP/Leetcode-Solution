// Last updated: 7/6/2026, 6:48:36 PM
class Solution {
public:
    string processStr(string s) {
        string s1="";
        
        for(char c : s)
        {
            if(c=='*')
            {
                if(s1.empty())
                {
                    1;
                }
                else
                    s1.pop_back();
            }
            else if(c=='#')
            {
                s1=s1+s1;
            }
            else if(c=='%')
            {
                if(s1.empty())
                {
                    1;
                }
                else
                {
                    int i=0;
                    int j=s1.size()-1;
                    while(i<j)
                    {
                        swap(s1[i],s1[j]);
                        i++;
                        j--;
                    }
                }
            }
            else 
                s1.push_back(c);
        }
        return s1;
    }
};