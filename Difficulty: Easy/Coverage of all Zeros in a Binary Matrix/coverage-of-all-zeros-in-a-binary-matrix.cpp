class Solution {
public:
    int findCoverage(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> left(n, vector<int>(m, 0));
        vector<vector<int>> right(n, vector<int>(m, 0));
        vector<vector<int>> up(n, vector<int>(m, 0));
        vector<vector<int>> down(n, vector<int>(m, 0));

       
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < m; j++) {
                left[i][j] = left[i][j - 1] || (mat[i][j - 1] == 1);
            }
        }

        
        for (int i = 0; i < n; i++) {
            for (int j = m - 2; j >= 0; j--) {
                right[i][j] = right[i][j + 1] || (mat[i][j + 1] == 1);
            }
        }

    
        for (int j = 0; j < m; j++) {
            for (int i = 1; i < n; i++) {
                up[i][j] = up[i - 1][j] || (mat[i - 1][j] == 1);
            }
        }

      
        for (int j = 0; j < m; j++) {
            for (int i = n - 2; i >= 0; i--) {
                down[i][j] = down[i + 1][j] || (mat[i + 1][j] == 1);
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    ans += left[i][j];
                    ans += right[i][j];
                    ans += up[i][j];
                    ans += down[i][j];
                }
            }
        }

        return ans;
    }
};