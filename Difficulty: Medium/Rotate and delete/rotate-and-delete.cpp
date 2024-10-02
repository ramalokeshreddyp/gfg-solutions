//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
       int k = 1; 
        
        deque<int> dq(arr.begin(), arr.end());

        while (dq.size() > 1) {
           
            int lastElement = dq.back();
            dq.pop_back(); 
            dq.push_front(lastElement); 
 if (k <= dq.size()) {
                dq.erase(dq.end() - k); 
            } else {
                dq.pop_front();
            }

          
            k++;
            
         
        }
        
        return dq.front();
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends