class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int z=0;
        int l=0,r=0,mx=0;
        while(r<arr.size()){
            if(arr[r]==0){
                z++;
            }
            if(z>k){
                if(arr[l]==0){
                    z--;
                }
                l++;
            }
            if(z<=k){
                mx=max(mx,r-l+1);
            }
            r++;
        }
        return mx;
    }
};
