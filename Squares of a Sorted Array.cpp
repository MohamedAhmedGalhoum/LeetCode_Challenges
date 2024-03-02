class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ret(n);
        int l = 0 , r = n - 1 , pos = n - 1;

        while(l <= r){
            int x = nums[l] * nums[l];
            int y = nums[r] * nums[r];
            if( x > y){
                l++;
                ret[pos] = x;
            }else{
                r--;
                ret[pos] = y;
            }
            pos--;
        }
      
        return ret;
    }
};
