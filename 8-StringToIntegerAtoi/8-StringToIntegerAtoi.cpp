// Last updated: 7/6/2026, 6:51:29 PM
class Solution {
public:
    int myAtoi(string s) {
        int i=0, 
        n=s.size();

        while(i<n&&s[i]==' ')
        {
            i++;
        }
        int k=1;
        if (i<n && (s[i]=='+' || s[i]=='-')) {
            if (s[i] == '-')
                k=-1;
            i++;
        }

        long long num=0;

        while (i<n && s[i]<='9'&&s[i]>='0') {
            num = num*10+ (s[i]-'0');

            if (k==1 && num>INT_MAX)
                return INT_MAX;

            if (k==-1 && -num<INT_MIN)
                return INT_MIN;
            i++;
        }

        return k*num;
    }
};