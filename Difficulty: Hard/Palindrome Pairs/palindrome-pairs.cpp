class Solution {
public:
    bool palindromePair(vector<string>& arr) {
        unordered_map<string, int> mp;

        for (auto &s : arr) mp[s]++;

        auto pal = [&](const string &s, int l, int r) {
            while (l < r) {
                if (s[l++] != s[r--]) return false;
            }
            return true;
        };

        for (auto &s : arr) {
            int n = s.size();

            for (int i = 0; i <= n; i++) {
                string a = s.substr(0, i);
                string b = s.substr(i);

                if (pal(a, 0, a.size() - 1)) {
                    string t = b;
                    reverse(t.begin(), t.end());

                    if (mp.count(t)) {
                        if (t != s || mp[t] > 1) return true;
                    }
                }

                if (i < n && pal(b, 0, b.size() - 1)) {
                    string t = a;
                    reverse(t.begin(), t.end());

                    if (mp.count(t)) {
                        if (t != s || mp[t] > 1) return true;
                    }
                }
            }
        }

        return false;
    }
};