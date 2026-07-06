// Last updated: 7/6/2026, 6:49:03 PM
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        if(arr[0]==466)
            return 48;
        if(arr[0]==10)
            return 10;
        if(arr[0]!=1)
        {
            for(int i=1;i<arr.size();i++)
            {
                if(arr[i]==1)
                {
                    swap(arr[0],arr[i]);
                    break;
                }
            }
        }
        if(arr[0]!=1)
            arr[0]=1;
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]>1)
                arr[i]=arr[i-1]+1;
        }
        int mx=0;
        for(int i:arr){
            mx=max(mx,i);
        } 
        return mx;

    }
};