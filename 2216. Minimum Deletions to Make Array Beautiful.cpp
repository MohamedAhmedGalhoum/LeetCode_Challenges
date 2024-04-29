class Minimum_Deletions_to_Make_Array_Beautiful {
public:
    int minDeletion(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        int start = 0;
        int answer = 0;
        while(start < nums.size() - 1){
            if(nums[start] == nums[start + 1]){
                answer++;
                start++;
            }else{
                start+=2;
            }
        }
        if(start == nums.size() - 1){
            answer++;
        }
        return answer;
    }
};
