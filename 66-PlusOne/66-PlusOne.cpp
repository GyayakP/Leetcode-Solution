// Last updated: 7/6/2026, 6:50:48 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i]+=1;
                return digits;
            }

        }
        vector<int> a(n+1,0);
        a[0]=1;
        
        return a;
    }
};