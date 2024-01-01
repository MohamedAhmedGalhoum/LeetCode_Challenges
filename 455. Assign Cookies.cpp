int findContentChildren(vector<int>& g, vector<int>& s) {
    int ans = 0;
    sort(s.begin() , s.end());
    sort(g.begin() , g.end());
    int idxs = s.size() - 1 , idxg = g.size() - 1;
    while(idxs >= 0 && idxg >= 0){
        if(s[idxs] >= g[idxg]){
            ans++;
            idxs--;
        }
        idxg--;
    }
    return ans;
}
