class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = count(s.begin() , s.end() , '1');
        int zeros = count(s.begin() , s.end() , '0');
        
        return string(ones - 1 , '1') + string(zeros , '0') + string(1 , '1');
    }
};
