class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int m=pat.size();
        int n=txt.size();
        vector<int>f(26,0);
        vector<int>p(26,0);
        for(int i=0;i<m;i++){
            f[pat[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            p[txt[i]-'a']++;
        }
        int ans=0;
        if(f==p){
            ans++;
        }
        for(int i=m;i<n;i++){
            p[txt[i]-'a']++;
            p[txt[i-m]-'a']--;
            if(p==f){
                ans++;
            }
        }
        return ans;
    }
};