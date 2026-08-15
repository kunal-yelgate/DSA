class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        bool Nonzero = false;
        int Xorterm = 0;

        for(int x : nums) {
            Xorterm ^= x;

            if( x != 0) {
                Nonzero = true;
            }
        }

        if(Xorterm != 0 ) {
            return n;
        }

        if(Nonzero != 0 ) {
            return n - 1;
        }

        return 0;
    }
};