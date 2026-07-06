// Last updated: 7/6/2026, 6:50:07 PM
class Solution {
public:
    int addDigits(int num) {
        if(num==0)
        {
            return 0;
        }
        if(num%9!=0)
        {
            return num%9;
        }
        else
        
        {
            return 9;
        }
        
    }
};