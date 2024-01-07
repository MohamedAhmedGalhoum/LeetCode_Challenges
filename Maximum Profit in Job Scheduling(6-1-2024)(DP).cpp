vector<int>dp;
int n;
struct task{
    int s , e , p;
    task(int _s , int _e , int _p){
        s = _s;
        e = _e;
        p = _p;
    }
};
static bool comp(task & t1 , task &t2){
    return (t1.s < t2.s) ;
}
vector<task>tasks;
int bs(int e){
    int l = 0 , r = n-1 , mid , ans = n;
    while(l <= r){
        mid = (l + r) / 2;
        if(tasks[mid].s >= e){
            r = mid - 1;
            ans = mid;
        }else l = mid + 1;
    }
    return ans;
}
int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
     n = e.size();
    for(int i = 0 ; i < n ; i++) 
        tasks.emplace_back(task(s[i] , e[i] , p[i]));
    sort(tasks.begin() , tasks.end() , comp);
    dp = vector<int>(n + 5 , 0);
    for(int i = n-1 ; i >= 0; i--){
        int next = bs(tasks[i].e);
        dp[i] += max(dp[i+1] , dp[next] + tasks[i].p);
    }
    return dp[0];
}
