int numberOfBeams(vector<string>& arr) {
        int ret = 0;
        vector<int> ans;
        for (int i = 0; i < (int)arr.size(); i++) {
            int Number_of_ones = count(arr[i].begin(), arr[i].end(), '1');
            if (Number_of_ones >= 1)
                ans.push_back(Number_of_ones);
        }
        for (int i = 1; i < (int)ans.size(); i++) {
            if (ans[i] > 1) {
                ret += (ans[i] * ans[i - 1]);
            } else if (ans[i] == 1) {
                ret += (ans[i - 1]);
            }
        }
        return ret;
    }
