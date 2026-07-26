class Solution {
public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        int i = 0, cnt = 1;
        while (i < n) {
            vector<int> level;
            for (int j = 0; j < cnt && i < n; j++, i++)
                level.push_back(arr[i]);
            sort(level.begin(), level.end());
            ans.push_back(level);
            cnt <<= 1;
        }
        return ans;
    }
};