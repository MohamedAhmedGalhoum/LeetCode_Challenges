vector<vector<int>>dp;
    int mod = 1e9 + 7 , kk;
    int sol(int idx , int rem){
        if(idx == 0) return (rem == 0);
        if(rem < 0) return 0;
        int &ret = dp[idx][rem];
        if(~ret) return ret;
        ret = 0;
        for(int i = 1 ; i <= kk ; i++){
            ret = ((ret % mod) + (sol(idx - 1  , rem - i) % mod)) % mod ;
        }
        return ret % mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp = vector<vector<int>>(n + 5 , vector<int>(target + 5 , -1));
        kk = k;
        return sol(n , target);
    }
