class Solution {
public:
    long long func(string &s, int k) {
        if (k < 0) return 0;

        int freq[26] = {0};
        int distinct = 0;
        int l = 0;
        long long cnt = 0;

        for (int r = 0; r < s.size(); r++) {
            if (freq[s[r] - 'a'] == 0)
                distinct++;

            freq[s[r] - 'a']++;

            while (distinct > k) {
                freq[s[l] - 'a']--;

                if (freq[s[l] - 'a'] == 0)
                    distinct--;

                l++;
            }

            cnt += (r - l + 1);
        }

        return cnt;
    }

    long long countSubstr(string &s, int k) {
        return func(s, k) - func(s, k - 1);
    }
};