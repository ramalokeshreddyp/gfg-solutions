class Solution {
  public:
    string removeSpaces(string& s) {
        string res;
        res.reserve(s.size());
        for(char c : s) {
            if(c != ' ') res += c;
        }
        return res;
    }
};