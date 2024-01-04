 int minOperations(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int i = 0 ; i < (int) arr.size() ; i++) {
            mp[arr[i]]++;
        }
        int ans = 0;
        for (auto &ele : mp) {
            if (ele.second == 1) {
                return -1;
            } else {
                ans+=ele.second / 3;
                if(ele.second % 3)ans++;
            }
        }
        return ans;
    }
