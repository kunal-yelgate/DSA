class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int res = 0;

        for(char ch : s) {
            if(ch == '(') {
                count++;
                res = max(res, count);
            }
            else if(ch == ')') {
                count--;
            } 
        }
        return res;
    }
};