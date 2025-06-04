// User function Template for C++

class Solution {
  public:
bool iscc(vector<int>stalls,int k,int md)
{
    int li=stalls[0];
    int cnt=1;
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-li>=md){
            cnt++;
            li=stalls[i];
        }
        if(cnt==k){
            return true;
        }
        
    }
    return false;
    
}
    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls[n-1]-stalls[0];
        int result=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(iscc(stalls,k,mid)){
                result=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return result;
    }
};