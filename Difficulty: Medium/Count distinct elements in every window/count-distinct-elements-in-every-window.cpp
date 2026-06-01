class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
       unordered_map<int,int>mpp;
       for(int i=0;i<k;i++){
           mpp[arr[i]]++;
           
       }
       vector<int>res;
       res.push_back(mpp.size());
       int l=0,r=k;
       while(r<n){
           mpp[arr[r]]++;
           mpp[arr[l]]--;
           
           if(mpp[arr[l]]==0){
               mpp.erase(arr[l]);
           }
           res.push_back(mpp.size());
           l++;
           r++;
       }
       return res;
    }
};