// Last updated: 7/6/2026, 6:49:34 PM
class Solution 
{
    public String convertToBase7(int num) 
    {
        StringBuffer sb= new StringBuffer();
        boolean isNegative=num<0;
        if(num==0)
        {
            return "0";
        }
        if(isNegative)
        {
            num=num*-1;
        }
        while(num!=0)
        {
            int j=num%7;
            sb.append(j);
            num=num/7;

        }
        if(isNegative)
        {
            sb.append("-");
        }
        sb.reverse();
        String s= new String();
        s=sb.toString();
        return s;
    }
}