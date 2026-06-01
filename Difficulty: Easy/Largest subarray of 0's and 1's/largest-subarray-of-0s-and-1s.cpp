class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> firstIndex;
        
        int sum = 0, maxLen = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            sum += (arr[i] == 1 ? 1 : -1);
            
            if (sum == 0) {
                maxLen = i + 1;
            }
            
            if (firstIndex.find(sum) != firstIndex.end()) {
                maxLen = max(maxLen, i - firstIndex[sum]);
            } else {
                firstIndex[sum] = i;
            }
        }
        
        return maxLen;
    }
};