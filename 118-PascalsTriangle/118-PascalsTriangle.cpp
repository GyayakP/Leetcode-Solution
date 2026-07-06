// Last updated: 7/6/2026, 6:50:35 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> pre;
        pre.push_back(1);
        vector<vector<int>> result;
        result.push_back(pre);

        for(int i=2;i<=numRows;i++)
        {
            vector<int> curr(i,1);
            for(int j=1; j<i-1; j++)
            {
                curr[j]=pre[j]+pre[j-1];

            }
            result.push_back(curr);
            pre=curr;
        }
        return result;


        
    }
};