class Solution {
  public:
    int longestSubarray(vector<int>& a, int k) {
        unordered_map<long long,int> m;
        long long s=0;
        int r=0;
        for(int i=0;i<a.size();i++){
            s+=a[i];
            if(s==k) r=i+1;
            if(m.find(s)==m.end()) m[s]=i;
            if(m.find(s-k)!=m.end()) r=max(r,i-m[s-k]);
        }
        return r;
    }
};