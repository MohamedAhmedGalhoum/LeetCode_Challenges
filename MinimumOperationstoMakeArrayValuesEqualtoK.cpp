class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int answer = 0;
        set<int>st;
        for(int i = 0 ; i < (int) nums.size() ; i++){
            if(nums[i] < k)return -1;
            if(nums[i] > k)st.insert(nums[i]);
        }
        return st.size();
    }
};
