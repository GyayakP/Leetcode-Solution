// Last updated: 7/6/2026, 6:50:41 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int n=m.size();
        int n1=m[0].size();
        for(int i=0;i<n;i++)
        {
            if(t==m[i][n1-1])
            {
                return true;
            }
            else if(t<m[i][n1-1])
            {
                int j=0;
                while(j<n1)
                {
                    if(m[i][j]==t)
                        return true;
                    j++;
                }
                return false;
                
            }
        }
        return false;
    }
};