// Last updated: 7/6/2026, 6:50:02 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n=mat.size();
        int m=mat[0].size();
        int r=0;
        int c=m-1;

        while(r<n && 0<=c)
        {
            if(t==mat[r][c])
                return true;
            else if(t>mat[r][c])
                r++;
            else 
                c--;
        }
        return false;
    }
};