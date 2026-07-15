// Last updated: 7/15/2026, 4:55:45 PM
1class Solution {
2public:
3    bool tour(vector<vector<int>>& arr,int r, int c, int n, int count)
4    {
5        if(r>=n||c>=n||r<0||c<0||count!=arr[r][c])
6            return false;
7        if(count==(n*n)-1)
8            return true;
9
10        bool ans1=tour(arr,r-2,c+1,n,count+1);
11        bool ans2=tour(arr,r-1,c+2,n,count+1);
12        bool ans3=tour(arr,r+1,c+2,n,count+1);
13        bool ans4=tour(arr,r+2,c+1,n,count+1);
14        bool ans5=tour(arr,r+2,c-1,n,count+1);
15        bool ans6=tour(arr,r+1,c-2,n,count+1);
16        bool ans7=tour(arr,r-1,c-2,n,count+1);
17        bool ans8=tour(arr,r-2,c-1,n,count+1);
18
19        return (ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8);
20    }
21    bool checkValidGrid(vector<vector<int>>& arr) {
22        return tour(arr,0,0,arr.size(),0);
23    }
24};