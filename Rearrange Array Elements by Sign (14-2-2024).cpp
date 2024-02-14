class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ret((int)nums.size());
        int evIdx = 0 , oddIdx = 1;
        for(auto it : nums){
            if(it > 0) ret[evIdx] = it , evIdx += 2;
            else ret[oddIdx] = it , oddIdx += 2;
            
        }
        return ret;
    }
};
