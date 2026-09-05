class Solution {
  public:
    int solve(int n, string s) {
        // code here
        int cnt=0;
        unordered_set<char>us,nt;
        for(int i=0;i<s.size();i++){
            if(us.count(s[i])){
                n++;
            }
            else{
                if(n!=0&&nt.count(s[i])==0){
                n--;
                us.insert(s[i]);
                }
                else{
                    if(!nt.count(s[i])){
                    cnt++;
                    nt.insert(s[i]);
                    }
                }
            }
        }
        return cnt;
    }
};
