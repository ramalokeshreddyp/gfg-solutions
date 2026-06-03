class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        int n=s.size(),m=p.size(),ml=1e9,si=-1;
        int hash[256]={0},l=0,r=0;
        for(int i=0;i<m;i++){
            hash[p[i]]++;
        }
        int cnt=0;
        while(r<n){
            if(hash[s[r]]>0){
                cnt++;
            }
            hash[s[r]]--;
            while(cnt==m){
                if(r-l+1<ml){
                    ml=r-l+1;
                    si=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    cnt--;
                }
            l++;    
            }
            r++;
        }
    return (si == -1) ? "" : s.substr(si, ml);
    }
};