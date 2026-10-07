// Last updated: 10/7/2026, 9:05:39 PM
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int op=0;
5        int cp=0;
6
7        for(char c:s)
8        {
9            if(c=='(')
10            {
11                op++;
12            }
13            else if(op>0&&c==')')
14            {
15                op--;
16            }
17            else
18                cp++;
19        }
20        return op+cp;
21    }
22};