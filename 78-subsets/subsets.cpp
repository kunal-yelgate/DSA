class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> rest;
        vector<int> subset;

        createSubset(nums, 0, rest, subset);
        return rest;
    }

    void createSubset(vector<int>& nums, int index,  vector<vector<int>>& rest, vector<int>& subset) {
        if(index == nums.size()) {
            rest.push_back(subset);
            return;
        }

        subset.push_back(nums[index]);
        createSubset(nums, index + 1, rest, subset);

        subset.pop_back();
         createSubset(nums, index + 1, rest, subset);

    }
};