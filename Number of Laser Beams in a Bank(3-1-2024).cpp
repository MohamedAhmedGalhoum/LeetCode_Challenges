int numberOfBeams(vector<string>& bank) {
    int ans = 0;
    int n = bank.size() , m = bank[0].size();
    int cnt = 0;
    for(int i = 0 ; i < n ;i++){
        int subCnt = 0;
        for(int j = 0 ; j < m ;j++){
            subCnt += (bank[i][j] - '0');
        }
        ans += cnt*subCnt;
        if(subCnt) cnt = subCnt;
    }
    return ans;
}
