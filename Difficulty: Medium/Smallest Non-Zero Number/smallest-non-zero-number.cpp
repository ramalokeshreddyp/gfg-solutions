class Solution {
public:
    int find(vector<int>& arr) {
        long long req = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            req = (arr[i] + req + 1) / 2;
        }
        return max(1LL, req);
    }
};