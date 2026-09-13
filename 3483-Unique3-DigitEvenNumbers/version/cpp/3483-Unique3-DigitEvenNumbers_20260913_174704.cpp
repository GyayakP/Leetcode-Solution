// Last updated: 9/13/2026, 5:47:04 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& arr, int k) {
4        vector<int> premax(arr.size());
5        vector<int> sufmin(arr.size());
6        premax[0]=arr[0];
7        for(int i=1;i<arr.size();i++)
8        {
9
10            premax[i]=max(premax[i-1],arr[i]);
11        }
12        sufmin[arr.size()-1]=arr[arr.size()-1];
13        for(int i=arr.size()-2;i>=0;i--)
14        {
15            sufmin[i]=min(sufmin[i+1],arr[i]);
16        }
17
18        for(int i=0;i<arr.size();i++)
19        {
20            if(premax[i]-sufmin[i]<=k)
21                return i;
22        }
23        return -1;
24    }
25};