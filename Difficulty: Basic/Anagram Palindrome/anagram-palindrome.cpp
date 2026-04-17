class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        unordered_map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        int odd=0;for(auto it:mpp){
            if(it.second%2!=0){
                odd++;
            }
        }
        if(odd>1){
            return false;
        }
        return true;
    }
};