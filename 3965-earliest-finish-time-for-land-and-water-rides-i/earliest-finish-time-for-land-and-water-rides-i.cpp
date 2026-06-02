class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int time = INT_MAX;

        for(int i=0; i < landStartTime.size() ; i++) {
            for(int j=0 ; j< waterStartTime.size() ; j++) {

                int landend = landStartTime[i] + landDuration[i];
                int waterStart = max(landend, waterStartTime[j]);
                int end1 = waterStart + waterDuration[j];

               int  waterend = waterStartTime[j] + waterDuration[j];
                int landStart = max(waterend , landStartTime[i]);
               int end2 = landStart + landDuration[i];

                time = min(time, min(end1, end2));
            }
        }
        return time;
    }
};