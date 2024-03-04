class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin() , tokens.end());
        int n = tokens.size();
        int score = 0 , sum = 0;

        int r = n - 1;
        for(int i = 0 ; i < n ; i++){
            if(sum >= 1 && tokens[i] > power){
                sum--;
                power+=tokens[r];
                tokens[r] = -1;
                r--;
            }
            if(tokens[i] == -1) break;
            if( power >= tokens[i]){
                power -= tokens[i];
                sum++;
            }
            score = max(score , sum);
        }

        return score;
        
    }
};
