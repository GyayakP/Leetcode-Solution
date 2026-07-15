// Last updated: 7/15/2026, 6:32:09 PM
1class Solution {
2public:
3    bool jump(vector<int>& arr,vector<bool>& chk,int i)
4    {
5        if(i>arr.size()-1||i<0)
6            return false;
7        if(arr[i]==0)
8        {
9            return true;
10        }
11        if(chk[i])
12            return false;
13        chk[i]=true;
14        bool ans1=jump(arr,chk,i+arr[i]);
15        bool ans2=jump(arr,chk,i-arr[i]);
16        
17        return ans1||ans2;
18    }
19    bool canReach(vector<int>& arr, int start) {
20        vector<bool> chk(arr.size(),false);
21        return jump(arr,chk,start);
22    }
23};