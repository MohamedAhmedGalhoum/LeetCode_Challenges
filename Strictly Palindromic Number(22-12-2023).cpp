class Solution {
public:
    bool isPalindrome(string s){
        int start = 0 , end = s.size() - 1;
        while(end >= start){
            if(s[start++] != s[end--])return false;
        }
        return true;
    }
    bool ConvertDecimalToBase_I(int n , int mul){
        string res = "";
        while(n!=0){
            res+=to_string(n%mul);
            n/=mul;
        }
        return isPalindrome(res);
    }
    bool isStrictlyPalindromic(int n) {
        for(int i = 2 ; i <= n - 2 ; i++){
            int temp = n;
            if(ConvertDecimalToBase_I(temp , i) == false){
                return false; 
            }
        }
        return true;
    }
};
