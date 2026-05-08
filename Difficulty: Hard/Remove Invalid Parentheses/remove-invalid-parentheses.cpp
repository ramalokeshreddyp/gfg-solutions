class Solution {
public:
    bool isValid(string &s) {
        int cnt = 0;
        
        for (char c : s) {
            if (c == '(') cnt++;
            else if (c == ')') {
                if (cnt == 0) return false;
                cnt--;
            }
        }
        
        return cnt == 0;
    }

    vector<string> validParenthesis(string &s) {
        vector<string> ans;
        unordered_set<string> vis, res;
        queue<string> q;

        q.push(s);
        vis.insert(s);

        bool found = false;

        while (!q.empty()) {
            string cur = q.front();
            q.pop();

            if (isValid(cur)) {
                if (!res.count(cur)) {
                    ans.push_back(cur);
                    res.insert(cur);
                }
                found = true;
            }

            if (found) continue;

            for (int i = 0; i < cur.size(); i++) {
                if (cur[i] != '(' && cur[i] != ')') continue;

                string nxt = cur.substr(0, i) + cur.substr(i + 1);

                if (!vis.count(nxt)) {
                    vis.insert(nxt);
                    q.push(nxt);
                }
            }
        }

        return ans;
    }
};