class Solution {
public:
    int maxProduct(int n) {
        if (n == 2) return 1;
        if (n == 3) return 2;

        long long ans = 1;

        if (n % 3 == 0) {
            for (int i = 0; i < n / 3; i++)
                ans *= 3;
        }
        else if (n % 3 == 1) {
            for (int i = 0; i < n / 3 - 1; i++)
                ans *= 3;
            ans *= 4;
        }
        else { // n % 3 == 2
            for (int i = 0; i < n / 3; i++)
                ans *= 3;
            ans *= 2;
        }

        return (int)ans;
    }
};