class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        for( int num : nums) {
            totalsum += num;
        }

        int leftsum = 0;
        for(int i=0 ; i < n ; i++) {
            int rightsum = totalsum - leftsum - nums[i];

            if( leftsum == rightsum ) {
                return i;
            }
            leftsum += nums[i];
        }
        return -1;

    
        // for( int i = 0 ; i < n ; i++) {
        //     int left = 0;
        //     for(int j = 0 ; j < i ; j++) {
        //         left += nums[i];
        //     }
        //     int right = 0;
        //     for(int k = i+1 ; k < n ; k++ ) {
        //         right += nums[k];
        //     }

        //     if( left == right) {
        //         return i;
        //     }
        // }
        // return -1;

    }
};