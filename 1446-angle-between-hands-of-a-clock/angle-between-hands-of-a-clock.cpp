class Solution {
public:
    double angleClock(int hour, int minutes) {

        double minutesAngle = minutes * 6.0;

        double hourAngle = (hour % 12) * 30 + minutes * 0.5;

        double diff = abs(hourAngle - minutesAngle);

        return min(diff, 360.0 - diff);
    }
};