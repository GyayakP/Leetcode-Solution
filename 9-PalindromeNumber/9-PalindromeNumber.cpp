// Last updated: 7/6/2026, 6:51:31 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int temp;
        long n=0;
        if(x<0)
        {
            return false;
        }
        else
        {
            temp=x;
            while(temp!=0)
            {

                n*=10;
                n=temp%10+n;
                temp=temp/10;
            }
            if(n==x)
                return true;
            else
                return false;
        }

    }
};