class Solution {
public:
    int findIndex(string s) {
        int n = s.size();

        int closeCnt = 0;
        for (char ch : s) {
            if (ch == ')') closeCnt++;
        }

        int openCnt = 0;

        for (int k = 0; k <= n; k++) {
            if (openCnt == closeCnt)
                return k;

            if (k < n) {
                if (s[k] == '(')
                    openCnt++;
                else
                    closeCnt--;
            }
        }

        return n;
    }
};