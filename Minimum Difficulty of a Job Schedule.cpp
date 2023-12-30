int dp[301][1001][11];
vector<int>v;
int n;
int sol(int idx , int mx , int day){

    if(day < 0) return 1e9;
    if(idx == n) return (day == 0 ? mx : 1e9);

    int &ret = dp[idx][mx][day];
    if(~ret) return ret;

    ret = sol(idx + 1 , max(mx , v[idx]) , day);
    
    ret = min(ret , sol(idx + 1 , v[idx] , day - 1) + mx);

    return ret;
}
int minDifficulty(vector<int>& vec, int d) {
    n = vec.size();
    v = vec;

    for(int i = 0 ; i <= n ; i++)
        for(int j = 0 ; j <= 1000 ; j++)
            for(int k = 0 ; k <= 10 ; k++) 
                dp[i][j][k] = -1;


    if(n < d) return -1;
    int ans = sol(1 , v[0] , d-1);
    return (ans > 1e4 ? -1 : ans);
}
