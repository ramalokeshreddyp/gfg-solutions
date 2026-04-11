class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        long long ans = 0;
        int n = arr.size();
        int len = 1;
        
        for(int i = 1; i < n; i++) {
            if(arr[i] > arr[i - 1]) {
                len++;
            } else {
                ans += (long long)(len - 1) * len / 2;
                len = 1;
            }
        }
        
        ans += (long long)(len - 1) * len / 2;
        return ans;
    }
};