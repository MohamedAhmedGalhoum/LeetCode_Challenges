class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int end = colors.size() - 1, start = 0;
        int answerLTR = INT_MIN, answerRTL = INT_MIN;
        while(end >= start){
            if(colors[end] != colors[start]){
                answerLTR = max(answerLTR, end - start);
            }
            end--;
        }
        end = colors.size() - 1, start = 0;
        while(end >= start){
            if(colors[end] != colors[start]){
                answerRTL = max(answerRTL, end - start);
            }
            start++;
        }
        return max(answerLTR, answerRTL);
    }
};
