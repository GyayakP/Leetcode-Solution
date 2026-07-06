// Last updated: 7/6/2026, 6:48:33 PM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n=grid.size();
        int a,b;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s.find(grid[i][j])!=s.end())
                {
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
                sum=grid[i][j]+sum;

            }
        }
        n=n*n;
        b=n*(n+1)/2;
        b=b+a-sum;
        ans.push_back(b);
        return ans;
    }
};