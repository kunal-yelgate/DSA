class Solution {
public:
    vector<string> letterCombinations(string digits) {

       if(digits.empty()) {
          return {};
       }

       map<char, string> num = {
            {'2',"abc"}, {'3',"def"}, {'4',"ghi"}, {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}
       };

       vector<string> result = {""};

       for(char digit : digits) {
           vector<string>temp;

           for(string str : result){
                for(char ch : num[digit]){
                    temp.push_back(str + ch);
                }
           }
        result = temp;
       }
       return result;
    }
};
