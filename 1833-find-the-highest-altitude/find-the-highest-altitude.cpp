class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int currentAlt = 0;
        int maxAlt = 0;

        for(int i = 0; i < n ; i++) {
            currentAlt += gain[i];
            maxAlt = max(maxAlt, currentAlt);
        }
        return maxAlt;
    }
};