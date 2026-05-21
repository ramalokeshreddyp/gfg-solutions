class Solution {
public:
    int cntOnes(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int,int>> q;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if((i == 0 || j == 0 || i == n - 1 || j == m - 1) && grid[i][j] == 1) {
                    q.push({i, j});
                    grid[i][j] = 0;
                }
            }
        }
        
        int d[5] = {-1, 0, 1, 0, -1};
        
        while(!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            
            for(int k = 0; k < 4; k++) {
                int nx = x + d[k];
                int ny = y + d[k + 1];
                
                if(nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] == 1) {
                    grid[nx][ny] = 0;
                    q.push({nx, ny});
                }
            }
        }
        
        int ans = 0;
        
        for(auto &r : grid) {
            for(int x : r) ans += x;
        }
        
        return ans;
    }
};