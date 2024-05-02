class Largest_Positive_Integer_That_Exists_With_Its_Negative {
public:
    int findMaxK(vector<int>& nums) {
        // int answer = INT_MAX;
        // for(int i = 0 ; i < (int) nums.size() ; i++){
        //     if(nums[i] < 0){
        //         answer = min(answer , nums[i]);
        //     }
        // }
        // string result = to_string(answer);
        // bool Does_it_here = false;
        // bool Founded = false;
        // for(int i = 0 ; i < (int) result.size() ; i++){
        //     if(result[i] == '0')Does_it_here = true;
        // }
        // for(int i = 0 ; i < (int) nums.size() ; i++){
        //     if(stoi(result) * -1 == nums[i])Founded = true;
        // }
        // if(Founded and !Does_it_here){
        //     return answer * -1;
        // }else{
        //     return -1;
        // }
        sort(nums.begin() , nums.end());
        for(int i = (int)nums.size() - 1 ; i >= 0 ; i--){
            if(nums[i] > 0 and binary_search(nums.begin() , nums.end() , -nums[i])){
                return nums[i];
            }
        }
        return -1;
    }
};
