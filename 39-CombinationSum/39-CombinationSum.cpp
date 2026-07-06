// Last updated: 7/6/2026, 6:51:02 PM
class Solution {
public:
    void sum(vector<int>& arr,vector<vector<int>>& ans,vector<int>& com,int t,int i)
    {
        if(i==arr.size()||t<0)
            return;
        if(t==0)
        {
            ans.push_back({com});
            return;
            
        }
        com.push_back(arr[i]);
        sum(arr,ans,com,t-arr[i],i);
        com.pop_back();
        sum(arr,ans,com,t,i+1);

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        vector<vector<int>> ans;
        vector<int> com;
        sum(arr,ans,com,t,0);

        return ans;
    }
};