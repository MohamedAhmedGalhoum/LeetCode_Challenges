class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int sum = 0;
        bool flag = false;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j]) {
                    for(int k = 0; k < m; k++) {
                        if(grid[k][j] && k != i) {sum++; flag = true; break;}
                    }
                    if(flag) {flag = false; continue;}
                    for(int l = 0; l < n; l++) {
                        if(grid[i][l] && l != j) {sum++; flag = true; break;}
                    }
                    if(flag) {flag = false; continue;}
                }
            }
        }
        return sum;
    }
};
