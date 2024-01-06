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
int sol(int idx){
    if(idx >= n) return 0;
    int &ret = dp[idx];
    if(~ret) return ret;

    ret = sol(idx + 1);
    int next = bs(tasks[idx].e);
    ret = max(ret , sol(next) + tasks[idx].p);
    return ret;
}
int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
     n = e.size();
    for(int i = 0 ; i < n ; i++) 
        tasks.emplace_back(task(s[i] , e[i] , p[i]));
    sort(tasks.begin() , tasks.end() , comp);
    dp = vector<int>(n + 5 , -1);
    return sol(0);
}
