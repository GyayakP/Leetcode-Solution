// Last updated: 7/6/2026, 6:50:52 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> x;
        int n=mat.size();
        int m=mat[0].size();

        int r1=0; int r2=n-1;
        int c1=0; int c2=m-1;

        while(r1<=r2 && c1<=c2)
        {
            for(int j=c1;j<=c2;j++)
            {
                x.push_back(mat[r1][j]);
            }
            for(int i=r1+1;i<=r2;i++)
            {
                x.push_back(mat[i][c2]);
            }
            for(int j=c2-1;j>=c1;j--)
            {
                if(r1==r2)
                    break;
                x.push_back(mat[r2][j]);
            }
            for(int i=r2-1; i>=r1+1; i--)
            {
                if(c1==c2)
                    break;
                x.push_back(mat[i][c1]);
            }
            r1++; r2--;
            c1++; c2--;
        }
        return x;

    }
};