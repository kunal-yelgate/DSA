class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> freq;
    if( s.length() != t.length()){
        return false;
    }

    for(int i=0 ; i < s.length() ; i++) {
        freq[s[i]]++;
    }

    for(int i=0; i < t.length() ; i++) {
        freq[t[i]]--;

        if(freq[t[i]] < 0){
            return false;
        }
    }
    return true;
    }
};