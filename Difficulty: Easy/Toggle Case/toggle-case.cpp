class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
            else{
                s[i]=tolower(s[i]);
            }
        }
        return s;
    }
};