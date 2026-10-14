class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        if( sum > num * 9 || sum < 1) {
            return "";
        }
 
        string res = {""};

        while(num > 0) {

            if( sum >= 9) {
                res.push_back('9');
                sum -= 9;
            }
            else{
                res.push_back('0' + sum);
                sum = 0;
            }
            num--;
        }
        return res;
    }
};