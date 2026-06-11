class Solution {
public:
    void combination(vector<int>& arr, int target, int index,  vector<int> ans, int sum ,  vector<vector<int>>& res) {
        if(index == arr.size() || sum > target) {
            return;
        }
        if(target == sum) {
            res.push_back(ans);
            return;
        }
        ans.push_back(arr[index]);
        combination(arr, target, index, ans, sum + arr[index], res);
        ans.pop_back();
        combination(arr, target , index + 1, ans , sum , res);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        combination(arr, target, 0, ans, 0, res);
        return res;
    }
};