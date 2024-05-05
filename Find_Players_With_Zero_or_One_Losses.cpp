class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> answer;
        vector<int> win, los;
        int Winners[100001] = {0}; // Initialize arrays
        int Lossers[100001] = {0};
        // Count winners and losers
        for (const auto& match : matches) {
            Winners[match[0]]++;
            Lossers[match[1]]++;
        }
        // Populate win vector
        for (int i = 1; i <= 100000; i++) {
            if (Winners[i] != 0 && Lossers[i] == 0) { // Check if player i is only a winner
                win.push_back(i);
            }
        }
        // Populate los vector
        for (int i = 1; i <= 100000; i++) {
            if (Lossers[i] != 0 && Lossers[i] == 1) { 
                los.push_back(i);
            }
        }
        answer.push_back(win);
        answer.push_back(los);
        return answer;
    }
};
