class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> tmp;
        for(int i=0;i < m;i++){
            vector<int> col(n);
            tmp.push_back(col);
        }
        for(int count = 0; count < k;count ++){
            for(int i=0;i < m; i++){
                for(int j=0; j<n;j++){
                    int layer = min({i,j,m-i-1,n-j-1});
                    if(i == layer){
                        if(n-j-1 == layer){
                            tmp[i][j] = grid[i+1][j];
                        }else{
                            tmp[i][j] = grid[i][j+1];
                        }
                    }else if(m-i-1 == layer){
                        if(j == layer){
                            tmp[i][j] = grid[i-1][j];
                        }else{
                            tmp[i][j] = grid[i][j-1];
                        }
                    }else if(j == layer){
                        tmp[i][j] = grid[i][j-1];
                    }else{
                        tmp[i][j] = grid[i][j+1];
                    }
                }
            }
            grid = tmp;
        }
        return grid;
    }
};