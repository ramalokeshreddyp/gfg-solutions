class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        unordered_set<int> s;
        for (int num : arr) {
            if (num >= start && num <= end) {
                s.insert(num);
            }
        }
        return s.size() == (end - start + 1);
    }
};