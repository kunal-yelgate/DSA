class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long windowSum = 0;
        long long maxsum = 0;
        int n = nums.size();
        unordered_map<int, int> freq;

        for(int i=0 ; i<k ; i++) {
            windowSum += nums[i];
            freq[nums[i]]++;
        }

        if(freq.size() == k){
            maxsum = windowSum;
        }

        for(int j=k ; j<n ; j++) {
            windowSum += nums[j];
            freq[nums[j]]++;

            windowSum -= nums[j-k];
            freq[nums[j-k]]--;

            if(freq[nums[j-k]] == 0) {
                freq.erase(nums[j-k]);
            }


            if (freq.size() == k) {
                maxsum = max(maxsum, windowSum);
            }
        }
        return maxsum;
    }
};