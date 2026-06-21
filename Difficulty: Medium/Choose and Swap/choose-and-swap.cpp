class Solution {
public:
    string chooseSwap(string s) {
        vector<int> first(26, -1);

        for (int i = 0; i < s.size(); i++) {
            if (first[s[i] - 'a'] == -1)
                first[s[i] - 'a'] = i;
        }

        char x = 0, y = 0;
        bool found = false;

        for (int i = 0; i < s.size() && !found; i++) {
            int cur = s[i] - 'a';

            for (int j = 0; j < cur; j++) {
                if (first[j] > first[cur]) {
                    x = s[i];
                    y = char('a' + j);
                    found = true;
                    break;
                }
            }
        }

        if (!found) return s;

        for (char &c : s) {
            if (c == x) c = y;
            else if (c == y) c = x;
        }

        return s;
    }
};