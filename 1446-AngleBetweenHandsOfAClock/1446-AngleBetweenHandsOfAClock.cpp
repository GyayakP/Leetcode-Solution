// Last updated: 7/6/2026, 6:49:08 PM
class Solution {
public:
    double angleClock(int h, int m) {
        double minhand = m*6;
        if(h==12)
            h=0;
        double hourhand = h*30;
        hourhand = hourhand + (m*0.5);
        double angle;
        if(minhand<=hourhand)
        {
            angle = hourhand-minhand;
        }
        if(hourhand<=minhand)
        {
            angle = minhand-hourhand;
        }
        if(angle>180)
        {
            angle= 360-angle;
            return angle;
        }
            return angle;

    }
};