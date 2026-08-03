class Solution {
  public:
    int maxSumWithK(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        vector<int>maxend(n);
        maxend[0]=arr[0];
        for(int i=1;i<n;i++){
            maxend[i]=max(arr[i],maxend[i-1]+arr[i]);
        }
        
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int ans=sum;
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];
            ans=max(ans,sum);
            ans=max(ans,sum+maxend[i-k]);
        }
        return ans;
    }
};