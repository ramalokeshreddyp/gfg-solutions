class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        sort(b.begin(),b.end());
        vector<int>res;
        for(auto it:a){
            int cnt=upper_bound(b.begin(),b.end(),it)-b.begin();
            res.push_back(cnt);
        }
        return res;
    }
};