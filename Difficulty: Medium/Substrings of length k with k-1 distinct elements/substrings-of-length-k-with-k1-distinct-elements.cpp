class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
         int n=s.size();
         unordered_map<char,int>mpp;
         for(int i=0;i<k;i++){
             mpp[s[i]]++;
         }
         int cnt=0;
         if(mpp.size()==k-1){
             cnt++;
         }
         int l=0,r=k;
         while(r<n){
             mpp[s[r]]++;
             mpp[s[l]]--;
             if(mpp[s[l]]==0){
                 mpp.erase(s[l]);
             }
             if(mpp.size()==k-1){
                 cnt++;
             }
             l++;
             r++;
         }
         return cnt;
    }
};