vector<vector<int>> findMartix(vector<int>&nums){
    map<int , int>mp;
    for(int i = 0 ; i < (int)nums.size() ; i++){
        mp[nums[i]]++;
    }
    auto MaxFreq = *max_element(mp.begin() , mp.end(),
    [](const pair<int , int>&a , const pair<int , int>&b){
        return a.second < b.second;
    });
    vector<vector<int>>ans(MaxFreq.second);
    for(auto ele : mp){
        int num = ele.first , freq = ele.second;
        for(int i = 0 ; i < freq ; i++){
            ans[i].push_back(num);
        }
    }
    return ans;
}
