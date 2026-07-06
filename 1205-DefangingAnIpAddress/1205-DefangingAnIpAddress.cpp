// Last updated: 7/6/2026, 6:49:12 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string a="";
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
            {
                a+="[.]";
            }
            else
            {
                a+=address[i];
            }
            
        }
        return a;
    }
};