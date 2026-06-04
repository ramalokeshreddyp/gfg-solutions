class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        vector<int>res;
       deque<int>dq;
       for(int i=0;i<n;i++){
           if(arr[i]<0){
                dq.push_back(i);
           }
           while(!dq.empty()&&dq.front()<=i-k){
               dq.pop_front();
           }
           
           
            
           if(i>=k-1){
               if(dq.empty()){
                   res.push_back(0);
               }
               else{
               res.push_back(arr[dq.front()]);
               }
           }
       }
        return res;
    }
};