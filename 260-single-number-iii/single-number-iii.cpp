class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

    map<int, int> count;

    for(int num : nums) {
        count[num]++;
    }

    vector<int> res;

    for(auto st : count) {
        if(st.second == 1) {
            res.push_back(st.first);
        }
    }

    return res;
    }
};