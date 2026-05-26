class Solution {
public:
    int minToggle(vector<int>& arr) {
        int zeros = 0;
        for (int x : arr) {
            if (x == 0) {
                zeros++;
            }
        }
        
        int min_toggles = zeros;
        int current_zeros = 0;
        int current_ones = 0;
        
        for (int x : arr) {
            if (x == 0) {
                current_zeros++;
            } else {
                current_ones++;
            }
            
            int toggles = current_ones + (zeros - current_zeros);
            if (toggles < min_toggles) {
                min_toggles = toggles;
            }
        }
        
        return min_toggles;
    }
};