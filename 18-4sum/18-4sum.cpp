// Last updated: 7/6/2026, 6:51:20 PM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int t) {
        int n=num.size();
        sort(num.begin(),num.end());
        vector<vector<int>> ans;

        for(int i=0;i<n;i++)
        {
            if(i>0&&num[i]==num[i-1])
                continue;
            for(int j=i+1;j<n;)
            {
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum=(long long)num[i]+(long long)num[j]+(long long) num[k]+(long long)num[l];

                    if(sum>t)
                        l--;
                    else if(sum<t)
                        k++;
                    else
                    {
                        ans.push_back({num[i],num[j],num[k],num[l]});
                        k++; l--;
                        while(k<l&&num[k]==num[k-1])
                            k++;
                    }
                    
                }
                j++;

                while(j<n&&num[j]==num[j-1])
                    j++;

            }
        }

        return ans;
    }
};