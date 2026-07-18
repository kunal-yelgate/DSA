class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> data;

        for(int num : nums) {
            if(data.count(num)){
                    return true;
            }
            data.insert(num);
        }
        return false;
    }
};