class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int, int> data;

        for(int i=0 ; i <= n-k ; i++) {

            unordered_set<int> temp;
            for(int j = i ; j < i + k ; j++) {
                temp.insert(nums[j]);
            }

            for(int x : temp){
                data[x]++;
            }
        }

        int ans = -1;

        for(auto &[x, count] : data ){
            if( count == 1 ){
                ans = max(ans, x);
            }
        }

        return ans;
    }
};