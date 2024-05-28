class Solution {
public:
    // Function to check if a given string is a palindrome
    bool isPalindrome(const string& str) {
        int left = 0, right = str.size() - 1;
        while (left < right) {
            if (str[left++] != str[right--])
                return false;
        }
        return true;
    }
    int maxProduct(string s) {
        int n = s.size();
        int maxProduct = 0;
        unordered_map<int, int> palindromeLengths; // map bitmask to length of palindrome
        // Iterate over all possible subsequences using bitmasks
        for (int mask = 1; mask < (1 << n); ++mask) {
            string subseq;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    subseq += s[i];
                }
            }
            if (isPalindrome(subseq)) {
                palindromeLengths[mask] = subseq.size();
            }
        }
        // Check all pairs of palindromic subsequences
        for (const auto& p1 : palindromeLengths) {
            for (const auto& p2 : palindromeLengths) {
                if ((p1.first & p2.first) == 0) { // Ensure masks are disjoint
                    int product = p1.second * p2.second;
                    maxProduct = max(maxProduct, product);
                }
            }
        }
        return maxProduct;
    }
};
