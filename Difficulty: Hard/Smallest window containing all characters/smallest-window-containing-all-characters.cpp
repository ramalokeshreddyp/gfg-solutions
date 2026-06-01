class Solution {
public:
    string minWindow(string &s, string &t) {

        vector<int> need(26, 0);

        int required = t.size();

        for(char c : t)
            need[c - 'a']++;

        int l = 0, r = 0;
        int formed = 0;

        int bestLen = INT_MAX;
        int bestStart = -1;

        while(r < s.size()) {

            if(need[s[r] - 'a'] > 0)
                formed++;

            need[s[r] - 'a']--;

            while(formed == required) {

                if(r - l + 1 < bestLen) {
                    bestLen = r - l + 1;
                    bestStart = l;
                }

                need[s[l] - 'a']++;

                if(need[s[l] - 'a'] > 0)
                    formed--;

                l++;
            }

            r++;
        }

        return (bestStart == -1) ? "" : s.substr(bestStart, bestLen);
    }
};