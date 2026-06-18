class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int countZero = 0;
        int  n = nums.size() ;

        for(int i = 0 ; i < n ; i++) {
            if( nums[i] == 0) {
                countZero++;
            }
            if( countZero > k) {
                if( nums[left] == 0) {
                      countZero--;
                }
                 left++;
            }
        } 
        return n - left;
    }
};