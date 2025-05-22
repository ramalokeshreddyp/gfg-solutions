// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
       int mx = -1,index=-1;
for (int i = 0; i < arr.size(); ++i) {
    int ones = count(arr[i].begin(), arr[i].end(), 1);

   if(ones>mx){
       mx=ones;
       index=i;
   }

    
}
return index;
    }
};