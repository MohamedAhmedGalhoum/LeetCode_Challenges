class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ret = nums[0];
        int cnt = 0;
        for(auto &it : nums){
            if(it == ret) cnt++;
            else cnt--;
            if(cnt < 0) {
                ret = it;
                cnt = 0;
            }
        }
        return ret;
    }
};
