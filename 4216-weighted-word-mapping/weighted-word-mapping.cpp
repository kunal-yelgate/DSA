class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for(auto &s : words) {
            int sum = 0;
            for(char c : s)
                sum += weights[c - 'a'];

            ans += 'z' - (sum % 26);
        }
        return ans;
    }
};