// Last updated: 7/7/2026, 2:02:51 PM
1class Solution {
2public:
3    long long sumAndMultiply(int n) {
4        long long x=0;
5        long long p=1;
6
7        while(n!=0)
8        {
9            if(n%10!=0)
10            {
11                x=x+((n%10)*p);
12                p=p*10;
13            }
14            n=n/10;
15        }
16        long long sum=0;
17        long long ans=x;
18        while(ans!=0)
19        {
20
21            sum+=ans%10;
22            ans/=10;
23        }
24        return sum*x;
25    }
26};