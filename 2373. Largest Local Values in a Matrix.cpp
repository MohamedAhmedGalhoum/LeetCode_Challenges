class Largest_Local_Values_in_a_Matrix {
private:
    int findMax(vector<vector<int>>& grid , int i , int j){
        int maxi = INT_MIN;
        for(int x = i ; x < i + 3 ; x++){
            for(int y = j ; y < j + 3 ; y++){
                maxi = max(maxi , grid[x][y]);
            }
        }
        return maxi;
    }
public:
    vector<vector<int>>lasrgestLocal(vector<vector<int>>& grid){
        int size = grid.size();
        vector<vector<int>>v(size - 2 , vector<int>(size - 2));
        for(int i = 0 ; i < size - 2 ; i++){
            for(int j = 0 ; j < size - 2 ; j++){
                v[i][j] = findMax(grid , i , j);
            }
        }
        return v;
    }
};
