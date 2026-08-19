class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> data;
        int left = 0;
        int result = 0;

        for( int right = 0  ; right < s.length() ; right++ ) {
            char ch = s[right];

            if(data.count(ch) && data[ch] >= left ) {
                left = data[ch] + 1;
            }

            data[ch] = right;

            result = max(result, right - left + 1);
        }

        return result;
    }
};