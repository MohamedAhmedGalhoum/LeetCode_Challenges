  bool isPathCrossing(string path) {
        vector<vector<int>> moves('Z');
        moves['N'] = { 0,  1};
        moves['S'] = { 0, -1};
        moves['W'] = {-1,  0};
        moves['E'] = { 1,  0};
        
        map<pair<int,int> , bool> visited;
        visited[{0 , 0}] = true;
        
        int x = 0;
        int y = 0;
        
        for (char c : path) {
            x += moves[c][0];
            y += moves[c][1];
            if (visited.find({x , y}) != visited.end())
                return true;
            
            visited[{x , y}] = true;
        }
        
        return false;
    }
