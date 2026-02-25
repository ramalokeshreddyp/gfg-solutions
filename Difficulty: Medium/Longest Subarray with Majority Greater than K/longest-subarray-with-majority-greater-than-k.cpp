class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
          int n = arr.size();
        unordered_map<int, int> firstIndex;
        int sum = 0, maxLen = 0;

        for (int i = 0; i < n; i++) {
            sum += (arr[i] > k) ? 1 : -1;

            if (sum > 0)
                maxLen = i + 1;

            if (firstIndex.find(sum) == firstIndex.end())
                firstIndex[sum] = i;

            if (firstIndex.find(sum - 1) != firstIndex.end())
                maxLen = max(maxLen, i - firstIndex[sum - 1]);
        }

        return maxLen;
    }
};