// Last updated: 7/6/2026, 6:48:51 PM
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        

        for(int i=0;i<n;i++)
        {
            vector<int> row(n,0), col(n,0);
            for(int j=0;j<n;j++)
            {
                if(++row[matrix[i][j]-1]>1)
                {
                    return false;
                }
                if(++col[matrix[j][i]-1]>1)
                {
                    return false;
                }
            }
        }
        return true;
    }
};