class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        int n=s.size();
        int maxl=0;
        for(int i=0;i<n;i++){
            int hash[26]={0};
            for(int j=i;j<n;j++){
                if(hash[s[j]-'a']==1){
                    break;
                }
                maxl=max(maxl,j-i+1);
                hash[s[j]-'a']=1;
            }
        }
        return maxl;
    }
};