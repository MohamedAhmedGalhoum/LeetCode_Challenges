class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int answer = nums[0], MaxAnswer = nums[0];
        for(int i = 1; i < (int)nums.size(); i++){
            if(nums[i] > nums[i - 1]) {
                answer += nums[i];   
            } else {
                MaxAnswer = max(MaxAnswer, answer);
                answer = nums[i];   
            }
        }
        return max(MaxAnswer, answer);
    }
};
