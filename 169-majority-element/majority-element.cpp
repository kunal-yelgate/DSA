class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int present = 0;
        int count = 0;

        for(int num : nums){
            if( count == 0) {
                present = num;
            }

            if(num == present) {
                count++;
            } else {
                count--;
            }
        }
        return present;
    }
};