class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> answer;
        int n = code.size();
        if (k == 0) {
            int size = code.size();
            while (size--)answer.push_back(0);
            return answer;
        }
        else if (k > 0) {
            int endCounter = 0;
            for (int i = 0; endCounter < n; i++) {
                endCounter++;
                int sum = 0;
                int actSize = k;
                int j = i + 1;
                while (actSize--) {
                    if (j == n)j = 0;
                    sum += code[j];
                    j++;
                }
                answer.push_back(sum);
            }
        }
        else {
            int endCounter = 0;
            for (int i = 0; endCounter < n; i++) {
                endCounter++;
                int sum = 0;
                int actSize = -k;
                int j = i - 1;
                while (actSize--) {
                    if (j < 0)j = n - 1;
                    sum += code[j];
                    j--;
                }
                answer.push_back(sum);
            }
        }
        return answer;
    }
};
