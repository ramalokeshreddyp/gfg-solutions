// User function Template for C++

class Solution {
  public:
    string electionWinner(vector<string>& arr) {
        // your code here
        unordered_map<string,int>mpp;
        for(auto it:arr){
            mpp[it]++;
        }
       string name;
       int mx=0;
       for(auto it:mpp){
           if(it.second>mx){
               mx=it.second;
               name=it.first;
           }
       }
       return name;
    }
};