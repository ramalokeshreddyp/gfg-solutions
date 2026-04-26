class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        int i = 0, j = 0, k = 0;
        int n1 = a.size(), n2 = b.size(), n3 = c.size();
        vector<int> res;
        
        while (i < n1 && j < n2 && k < n3) {
            if (a[i] == b[j] && b[j] == c[k]) {
                if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
                int val = a[i];
                while (i < n1 && a[i] == val) i++;
                while (j < n2 && b[j] == val) j++;
                while (k < n3 && c[k] == val) k++;
            } else {
                int mn = min({a[i], b[j], c[k]});
                if (a[i] == mn) i++;
                if (b[j] == mn) j++;
                if (c[k] == mn) k++;
            }
        }
        
        return res;
    }
};