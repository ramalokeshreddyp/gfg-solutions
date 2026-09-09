class Solution {
public:
    int findMax(int n) {
        string s = to_string(n);
        int ans = n;
        int maxSum = 0;

        for (char c : s)
            maxSum += c - '0';

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0')
                continue;

            string t = s;
            t[i]--;

            for (int j = i + 1; j < s.size(); j++)
                t[j] = '9';

            int sum = 0;
            for (char c : t)
                sum += c - '0';

            int num = stoi(t);

            if (sum > maxSum || (sum == maxSum && num > ans)) {
                maxSum = sum;
                ans = num;
            }
        }

        return ans;
    }
};
