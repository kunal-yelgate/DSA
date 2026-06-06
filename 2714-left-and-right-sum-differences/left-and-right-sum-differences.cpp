class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int rightsum, leftsum = 0;
        int totalsum = accumulate(nums.begin(), nums.end(),0);
        int n =nums.size();
        vector<int> ans(n);

        for(int i=0 ; i < n ; i++) {
            
            rightsum = totalsum - leftsum - nums[i];
            ans[i] = abs(leftsum - rightsum);
            leftsum += nums[i];
        }
        return ans;
    }
};