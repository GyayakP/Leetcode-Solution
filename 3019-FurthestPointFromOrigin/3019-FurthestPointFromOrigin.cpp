// Last updated: 7/6/2026, 6:48:39 PM
class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
       int l=0,r=0,d=0; 
       for(int i=0;i<s.size();i++)
       {
            if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                r++;
            else
                d++;
       }
       if(l>r)
       {
            return l+d-r;
       }
       else
       {
            return d+r-l; 
       }

    }
};