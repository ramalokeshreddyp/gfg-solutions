class Solution {
public:
    int minDist(vector<int>& arr, int x, int y) {
        int last = -1;
        int ans = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x || arr[i] == y) {
                if (last != -1 && arr[i] != arr[last]) {
                    ans = min(ans, i - last);
                }
                last = i;
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};
