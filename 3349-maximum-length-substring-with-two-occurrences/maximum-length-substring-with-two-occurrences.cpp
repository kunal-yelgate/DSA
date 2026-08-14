class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> freq;

        int left = 0;
        int res = 0;

        for (int start = 0; start < s.size(); start++) {

            freq[s[start]]++;
            while (freq[s[start]] > 2) {
                freq[s[left]]--;
                left++;
            }

            res = max(res, start - left + 1);
        }
        return res;
    }
};