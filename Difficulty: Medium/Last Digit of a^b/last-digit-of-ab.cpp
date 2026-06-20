class Solution {
public:
    int getLastDigit(string a, string b) {
        if (b == "0") return 1;

        vector<vector<int>> cyc = {
            {0}, {1}, {2,4,8,6}, {3,9,7,1}, {4,6},
            {5}, {6}, {7,9,3,1}, {8,4,2,6}, {9,1}
        };

        int d = a.back() - '0';
        auto &v = cyc[d];
        int m = 0, len = v.size();

        for (char c : b)
            m = (m * 10 + c - '0') % len;

        return v[(m ? m : len) - 1];
    }
};