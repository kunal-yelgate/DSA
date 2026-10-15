class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        for(int i=0 ; i<n ; i++) {

            unordered_set<int> suba;

            for(int j=i ; j<n ; j++) {
                suba.insert(nums[j]);
                int distinct = suba.size();
                res += distinct * distinct;
            }
        }
        return res;
    }
};