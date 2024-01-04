int minOperations(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(auto it : nums)
    {
        mp[it]++;
    }
    int res = 0;
    for(auto [num , cnt] : mp)
    {
        if(cnt == 1) return -1;
        res += cnt/3;
        cnt %= 3;
        if(cnt == 1) res = res - 1 + 2 , cnt = 0;
        if(cnt == 2) res++;
    }
    return res;
}
