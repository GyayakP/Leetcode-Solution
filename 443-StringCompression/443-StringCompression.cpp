// Last updated: 7/6/2026, 6:49:35 PM
class Solution {
public:
    int compress(vector<char>& c) {
        int j=0;
        for(int i=0;i<c.size();i++)
        {
            char ch=c[i];
            int count=0;
            while(i<c.size()&&c[i]==ch)
            {
                count++;
                i++;
            }
            if(count==1)
            {
                c[j++]=ch;
            }
            else
            {
                c[j++]=ch;
                string s=to_string(count);
                for(char k: s)
                {
                    c[j++]=k;       
                }
            }
            i--;
        }
        return j;

    }
};