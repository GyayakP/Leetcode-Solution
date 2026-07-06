// Last updated: 7/6/2026, 6:49:25 PM
class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> ans;

        for(int i=l;i<=r;i++)
        {
            int o=i;
            int re=0;
            bool b=false;
            while(o!=0)
            {
                re=o%10;
                o/=10;
                if(re==0||i%re!=0)
                {
                    b=true;
                    break;
                }
                
            }
            if(b)
                continue;
            ans.push_back(i);
        }
        return ans;
    }
};