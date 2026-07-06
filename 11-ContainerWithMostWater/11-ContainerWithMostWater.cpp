// Last updated: 7/6/2026, 6:51:27 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int cont=0;
        while(i<j)
        {
            int b=j-i;
            int l=min(height[i],height[j]);
            int curcont = b * l;
            cont=max(curcont,cont);

            if(height[i]<height[j]) 
                i++;
            else
                j--;
        }
        
        return cont;
    }
};