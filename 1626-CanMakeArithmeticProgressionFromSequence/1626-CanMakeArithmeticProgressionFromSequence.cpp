// Last updated: 7/6/2026, 6:49:06 PM
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       int t=arr[1]-arr[0];
       for(int i=2;i<arr.size();i++)
       {
            if(arr[i]-arr[i-1]!=t)
                return false;
       }
       return true;
    }
};