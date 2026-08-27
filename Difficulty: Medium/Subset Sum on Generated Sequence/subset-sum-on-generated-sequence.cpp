class Solution {
public:
    bool isPossible(vector<int>& arr, int s, int x) {
        if (x == 0 || x == s)
            return true;

        if (x < s)
            return false;

        long long total = s;
        int k = 0;

        for (int a : arr) {
            if (total > (long long)x - a)
                break;

            long long next = total + a;
            total += next;
            k++;
        }

        long long target = x;

        for (int i = k - 1; i >= 0; i--) {
            long long last = (total + arr[i]) / 2;

            if (last <= target) {
                target -= last;

                if (target == 0)
                    return true;
            }

            total = (total - arr[i]) / 2;
        }

        return target == s;
    }
};