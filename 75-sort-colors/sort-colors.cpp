class Solution {
public:
    void sortColors(vector<int>& nums) {
        int frist = 0 , mid = 0;
        int last = nums.size()-1;

        while(mid<=last) {

            if(nums[mid] == 0) {
                swap(nums[frist], nums[mid]);
                frist++;
                mid++;
            } 
            else if(nums[mid]==1) {
                mid++;
            } 
            else {
                swap(nums[mid], nums[last]);
                last--;
            }
        }
    
    }
};