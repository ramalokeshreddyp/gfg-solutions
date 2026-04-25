class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        vector<int> st;
        
        for (int x : arr) {
            while (!st.empty() && st.back() * x < 0) {
                int top = st.back();
                
                if (abs(top) > abs(x)) {
                    x = top;
                    st.pop_back();
                } 
                else if (abs(top) < abs(x)) {
                    st.pop_back();
                } 
                else {
                    st.pop_back();
                    x = 0;
                    break;
                }
            }
            
            if (x != 0) {
                if (st.empty() || st.back() * x >= 0) {
                    st.push_back(x);
                } else {
                    while (!st.empty() && st.back() * x < 0) {
                        int top = st.back();
                        
                        if (abs(top) > abs(x)) {
                            x = top;
                            st.pop_back();
                        } else if (abs(top) < abs(x)) {
                            st.pop_back();
                        } else {
                            st.pop_back();
                            x = 0;
                            break;
                        }
                    }
                    if (x != 0) st.push_back(x);
                }
            }
        }
        
        return st;
    }
};