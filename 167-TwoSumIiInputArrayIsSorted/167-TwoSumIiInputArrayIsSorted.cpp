// Last updated: 7/6/2026, 6:50:15 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) 
    {
        int i=0;
        int j=n.size()-1;
        vector<int> a;
        while(i<j)
        {
            if(n[i]+n[j]==t)
            {
                a.push_back(i+1);
                a.push_back(j+1);
                return a;
            }
            else if(n[i]+n[j]>t)
            {
                j--;
            }
            else if(n[i]+n[j]<t)
            {
                i++;
            }

        }
        return a;

    }
};