class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int countp = 0,countn = 0;

        for(int i=0 ; i < n ; i++) {
            if(nums[i] > 0) {
                countp++;
            } else if(nums[i] < 0 ) {
                countn++;
            }
        }
        int maxCot = max(countp,countn);
        return maxCot;
    }
};