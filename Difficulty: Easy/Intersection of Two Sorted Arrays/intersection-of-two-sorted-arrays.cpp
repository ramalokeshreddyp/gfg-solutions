class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int i=0,j=0,n=a.size(),m=b.size();
        vector<int> r;
        while(i<n && j<m){
            if(a[i]==b[j]){
                if(r.empty() || r.back()!=a[i]) r.push_back(a[i]);
                i++; j++;
            }
            else if(a[i]<b[j]) i++;
            else j++;
        }
        return r;
    }
};