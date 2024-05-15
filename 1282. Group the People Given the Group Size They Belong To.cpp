// class Solution {
// public:
//     vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
//         int freq[501] = {0};
//         for(int i = 0 ; i < (int) groupSizes.size() ; i++){
//             freq[groupSizes[i]]++;
//         }
//         vector<vector<int>>results;
//         for(int i = 0 ; i < 501 ; i++){
//             vector<int>answer;
//             if(freq[i]){
//                 int target = i;
//                 for(int j = 0 ; j < (int) groupSizes.size() ; j++){
//                     if(answer.size() == 3){
//                         results.push_back(answer);
//                         answer.clear();
//                         j--;
//                         continue;
//                     }
//                     if(groupSizes[j] == target){
//                         answer.push_back(j);
//                         freq[i]--;
//                     }
//                 }
//                 if(!answer.empty())results.push_back(answer);
//             }
//         }
//         return results;
//     }
// };

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& group) {
        unordered_map<int, vector<int>> MAP;
        for (int i = 0; i < group.size(); i++) {
            MAP[group[i]].push_back(i);
        }
        vector<vector<int>> answer;
        for (auto elements : MAP) {
            int element = elements.first;
            vector<int> brief = elements.second;
            int Stopedcounter = 0;
            vector<int> answers;
            for (int i = 0; i < brief.size(); i++) {
                if (Stopedcounter == 0) {
                    answers.clear();
                }
                answers.push_back(brief[i]);
                Stopedcounter++;
                if (Stopedcounter == element) {
                    answer.push_back(answers);
                    Stopedcounter = 0;
                }
            }
        }
        return answer;
    }
};
