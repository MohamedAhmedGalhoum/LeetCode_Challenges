class Solution {
public:
    bool squareIsWhite(string s) {
        // int toNum = s[1] - '0';
        // if (((toNum & 1) and (s[0] == 'a' or s[0] == 'c' or s[0] == 'e' or s[0] == 'g')) or ((!toNum & 1) and
        //         (s[0] == 'b' or s[0] == 'd' or s[0] == 'f' or s[0] == 'h'))) {
        //     return false;
        // } else {
        //     return true;
        // }
        return (s[0] + s[1]) % 2;
    }
};
