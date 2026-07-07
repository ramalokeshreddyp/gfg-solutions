class Solution {
public:
    int largestArea(int n, int m, int k, vector<vector<int>>& arr) {
        vector<int> rows = {0}, cols = {0};
        for (auto &x : arr) {
            rows.push_back(x[0]);
            cols.push_back(x[1]);
        }
        rows.push_back(n + 1);
        cols.push_back(m + 1);

        sort(rows.begin(), rows.end());
        sort(cols.begin(), cols.end());

        int mxRow = 0, mxCol = 0;

        for (int i = 1; i < rows.size(); i++)
            mxRow = max(mxRow, rows[i] - rows[i - 1] - 1);

        for (int i = 1; i < cols.size(); i++)
            mxCol = max(mxCol, cols[i] - cols[i - 1] - 1);

        return mxRow * mxCol;
    }
};