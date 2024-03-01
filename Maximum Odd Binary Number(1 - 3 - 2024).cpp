class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int size = s.size();
        int cnt = count(s.begin() , s.end() , '1');
        string ans(size , '0');
        ans[size - 1] = '1';
        for(int i = 0 ; i < cnt - 1 ; i++){
            ans[i] = '1';
        }
        return ans;
    }
};
