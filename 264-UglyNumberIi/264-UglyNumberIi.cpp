// Last updated: 7/6/2026, 6:49:55 PM
class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> a(n);
        a[0]=1;
        int t=0, th=0, f=0;

        for(int i=1;i<n;i++){
            int nt=a[t]*2;
            int nth=a[th]*3;
            int nf=a[f]*5;

            int nm =min({nt,nth,nf});
            a[i]=nm;
            
            if(nm==nt)
                t++;
            if(nm==nth)
                th++;
            if(nm==nf)
                f++;
        }
        return a[n-1];
    }
};