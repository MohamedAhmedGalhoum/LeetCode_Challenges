   int minCost(string colors, vector<int>& neededTime) {
        int ans = 0 , n = colors.size();
        for(int i = 1 ; i < n ; i++){
            int mx = neededTime[i-1] , tot = neededTime[i-1];
            bool alpha = 0;
            while(colors[i] == colors[i-1]){
                alpha = 1;
                tot += neededTime[i];
                mx = max(mx , neededTime[i]);
                i++;
            } 
            if(alpha){
                ans += (tot - mx);
                i--;
            }
        }
        return ans;
    }
