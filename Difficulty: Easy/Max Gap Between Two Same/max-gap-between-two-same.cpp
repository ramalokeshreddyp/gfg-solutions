class Solution {
  public:
    int maxCharGap(string &s) {
        // code here
        unordered_map<char,int>mpp;
        int n=s.size(),mx=-1;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i])!=mpp.end()){
                mx=max(mx,i-mpp[s[i]]-1);
            }
            else{
            mpp[s[i]]=i;
            }
        }
        return mx;
    }
};