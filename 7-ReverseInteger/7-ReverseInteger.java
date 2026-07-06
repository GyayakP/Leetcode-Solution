// Last updated: 7/6/2026, 6:51:32 PM
class Solution {
    public int reverse(int x) {
        
        int r=0;
        while(x!=0)
        {
            int n=x%10;
            if(r>214748364||r<-214748364)
                return 0;
            r=(r*10)+n;
            x/=10;
        }
        return r;
    }
}