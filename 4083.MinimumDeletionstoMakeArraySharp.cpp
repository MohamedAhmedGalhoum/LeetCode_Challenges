class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int deletions = 0;
        for (int i = 1; i < static_cast<int>(nums.size()); ++i) {
            if (nums[i] == nums[i - 1]) {
                ++deletions;
            }
        }
        return deletions;
    }
};
