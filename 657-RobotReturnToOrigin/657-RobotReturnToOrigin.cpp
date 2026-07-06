// Last updated: 7/6/2026, 6:49:26 PM
class Solution {
public:
    bool judgeCircle(string s){

       int l=0,u=0;

       for(int i=0;i<s.size();i++)
       {
            if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                l--;
            else if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                u--;
       }

      

       return l==0&&u==0;
    }
};