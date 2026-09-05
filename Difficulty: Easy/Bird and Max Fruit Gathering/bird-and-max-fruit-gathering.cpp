class Solution {
  public:
    int maxFruits(vector<int>& arr, int m) {
        // code here
        int n=arr.size();
      
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=arr[i];
        }
        int as=sum;
        int mx=sum;
        int k=0;
        for(int i=m-1;i>=0;i--){
            sum-=arr[i];
            sum+=arr[n-1-k];
            k++;
        mx=max(mx,sum);
        }
        for(int i=m;i<n;i++){
            as-=arr[i-m];
            as+=arr[i];
            mx=max(as,mx);
        }
        return mx;
    }
};