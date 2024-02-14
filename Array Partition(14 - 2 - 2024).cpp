class Solution {
public:
    int arrayPairSum(vector<int>& arr) {
        int ans = 0;
        sort(arr.begin() , arr.end());
        for(int i = 1 ; i < (int) arr.size() ; i+=2){
            ans+=(min(arr[i] , arr[i - 1]));
        }
        return ans;
    }
};
