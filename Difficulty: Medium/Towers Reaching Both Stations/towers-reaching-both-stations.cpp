class Solution {
public:
    int countCoordinates(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> p(n, vector<int>(m, 0)), q(n, vector<int>(m, 0));
        queue<pair<int,int>> qp, qq;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        for (int j = 0; j < m; j++) {
            p[0][j] = 1;
            qp.push({0, j});
            q[n - 1][j] = 1;
            qq.push({n - 1, j});
        }

        for (int i = 0; i < n; i++) {
            if (!p[i][0]) {
                p[i][0] = 1;
                qp.push({i, 0});
            }
            if (!q[i][m - 1]) {
                q[i][m - 1] = 1;
                qq.push({i, m - 1});
            }
        }

        auto bfs = [&](queue<pair<int,int>>& qu, vector<vector<int>>& vis) {
            while (!qu.empty()) {
                auto [x, y] = qu.front();
                qu.pop();
                for (int k = 0; k < 4; k++) {
                    int nx = x + dx[k], ny = y + dy[k];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m &&
                        !vis[nx][ny] && mat[nx][ny] >= mat[x][y]) {
                        vis[nx][ny] = 1;
                        qu.push({nx, ny});
                    }
                }
            }
        };

        bfs(qp, p);
        bfs(qq, q);

        int ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                ans += p[i][j] && q[i][j];

        return ans;
    }
};