class Solution {
  public:
    int maxProfit(int x, int y, vector<int> &a, vector<int> &b) {
        int n = a.size();
        vector<pair<int,int>> v;
        
        for (int i = 0; i < n; i++)
            v.push_back({abs(a[i] - b[i]), i});
        
        sort(v.rbegin(), v.rend());
        
        int ans = 0;
        
        for (auto &p : v) {
            int i = p.second;
            
            if ((a[i] >= b[i] && x > 0) || y == 0) {
                ans += a[i];
                x--;
            } else {
                ans += b[i];
                y--;
            }
        }
        
        return ans;
    }
};