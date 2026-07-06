// Last updated: 7/6/2026, 6:48:41 PM
class Solution {
public:
    bool isGood(vector<int>& n) {
        int mx=0;
        int x;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]>mx)
                mx=n[i];
        }
        vector<int> a(mx+1,0);
        for(int i=0;i<n.size();i++)
        {
            a[n[i]]++;
            if(n[i]!=mx&&a[n[i]]>1)
                return false;
        }
        if(a[mx]!=2)
        {
            return false;
        }
        if(mx+1==n.size())
            return true;
        else
            return false;
    }
};