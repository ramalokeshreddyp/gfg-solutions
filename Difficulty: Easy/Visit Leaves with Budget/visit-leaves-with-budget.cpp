class Solution {
public:
    int getCount(Node* root, int k) {
        if (!root) return 0;

        vector<int> v;
        queue<pair<Node*, int>> q;
        q.push({root, 1});

        while (!q.empty()) {
            auto [node, level] = q.front();
            q.pop();

            if (!node->left && !node->right)
                v.push_back(level);

            if (node->left)
                q.push({node->left, level + 1});

            if (node->right)
                q.push({node->right, level + 1});
        }

        sort(v.begin(), v.end());

        int ans = 0;
        for (int x : v) {
            if (k < x) break;
            k -= x;
            ans++;
        }

        return ans;
    }
};