class Solution {
  public:
    long long pairAndSum(vector<int> &arr) {
        // code here
      int n=arr.size();
      long long ans=0;
      for(int i=0;i<31;i++){
          long long cnt=0;
          for(auto x:arr){
              if(x&(1LL<<i)){
                  cnt++;
              }
          }
          long long p=(cnt*(cnt-1)/2);
          ans+=p*(1LL<<i);
      }
      return ans;
    }
};