class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> see(nums1.begin(), nums1.end());
        vector<int>ans;

        for(int num : nums2 ) {
            if(see.count(num)) {
              ans.push_back(num);
              see.erase(num);  
            }
        }
        return ans;
    }
};