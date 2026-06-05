class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n=arr.size();
        int l=0,r=0,len=0;
        unordered_map<int,int>mpp;
        while(r<n){
            mpp[arr[r]]++;
            
            while(mpp.size()>2){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0){
                    mpp.erase(arr[l]);
                }
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};