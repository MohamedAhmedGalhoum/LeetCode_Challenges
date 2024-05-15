class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        for (int i = 0 ; i < n ; i++) {
            int num = abs(nums[i]);
            int idx = num - 1;
            if (nums[idx] < 0)
                res.push_back(num);
            nums[idx] *= -1;
        }
        return res;
    }
};
// Another Solution with Amazing Work-around !! //
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>answer;
        int freq[100001] = {0};
        for(int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]]++;
        }
        for(int i = 0 ; i < 100001 ; i++){
            if(freq[i] and freq[i] == 2){
                answer.push_back(i); 
            }
        }
        return answer; 
    }
};
