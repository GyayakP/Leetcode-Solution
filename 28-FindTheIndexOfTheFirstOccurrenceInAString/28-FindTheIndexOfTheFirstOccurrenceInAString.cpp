// Last updated: 7/6/2026, 6:51:14 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int m=haystack.size();
        
        if(n==0)
            return 0;
        if(m<n)
        {
            return -1;
        }
        if(n==1&&haystack[0]==needle[0])
        {
            return 0;
        }
        for(int i=0;i<m;i++)
        {
            if(haystack[i]==needle[0])
            {
                if(haystack.substr(i,n)==needle)
                {
                    return i;
                }
            }
        }
        return -1;
        
    }
};