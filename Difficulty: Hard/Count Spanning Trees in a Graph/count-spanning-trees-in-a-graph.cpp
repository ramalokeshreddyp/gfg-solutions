class Solution {
public:
    int countSpanTree(int n, vector<vector<int>>& edges) {
        if (n == 1) return 1;

        vector<vector<long double>> lap(n, vector<long double>(n, 0));

        for (auto &e : edges) {
            int u = e[0], v = e[1];
            lap[u][u]++;
            lap[v][v]++;
            lap[u][v]--;
            lap[v][u]--;
        }

        int sz = n - 1;
        vector<vector<long double>> mat(sz, vector<long double>(sz));

        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                mat[i][j] = lap[i][j];
            }
        }

        long double det = 1;

        for (int i = 0; i < sz; i++) {
            int pivot = i;

            for (int j = i; j < sz; j++) {
                if (fabsl(mat[j][i]) > fabsl(mat[pivot][i])) {
                    pivot = j;
                }
            }

            if (fabsl(mat[pivot][i]) < 1e-9) return 0;

            if (pivot != i) {
                swap(mat[pivot], mat[i]);
                det *= -1;
            }

            det *= mat[i][i];

            for (int j = i + 1; j < sz; j++) {
                long double factor = mat[j][i] / mat[i][i];

                for (int k = i; k < sz; k++) {
                    mat[j][k] -= factor * mat[i][k];
                }
            }
        }

        return (int)llround(det);
    }
};