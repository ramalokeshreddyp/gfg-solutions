//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int n, m;
    vector<int> dx = {-1, -1, -1, 0, 1, 1, 1, 0};
    vector<int> dy = {-1, 0, 1, 1, 1, 0, -1, -1};

    void dfs(vector<vector<char>>& grid, int x, int y) {
        grid[x][y] = 'W'; 

        for (int dir = 0; dir < 8; ++dir) {
            int newX = x + dx[dir];
            int newY = y + dy[dir];

            
            if (newX >= 0 && newX < n && newY >= 0 && newY < m && grid[newX][newY] == 'L') {
                dfs(grid, newX, newY);
            }
        }
    }

    int countIslands(vector<vector<char>>& grid) {
        n = grid.size();
        if (n == 0) return 0;
        m = grid[0].size();

        int islands = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 'L') {
                    islands++;
                    dfs(grid, i, j); 
                }
            }
        }

        return islands;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends