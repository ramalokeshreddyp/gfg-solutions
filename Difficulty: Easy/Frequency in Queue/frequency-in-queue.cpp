//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    void enqueue(queue<int> &q, int k) {
        // code here
        q.push(k);
    }

    int findFrequency(queue<int> &q, int k) {

        
        //  code here
        deque<int>dq;
        queue<int>t=q;
        while(!t.empty()){
            dq.push_back(t.front());
            t.pop();
        }
    int cnt=count(dq.begin(),dq.end(),k);
    if(cnt==0){
        return -1;
    }
    else{
        return cnt;
    }
    }
};


//{ Driver Code Starts.
int main() {

    int testcase;
    cin >> testcase;
    cin.ignore();
    while (testcase-- > 0) {
        // Declaring Queue
        queue<int> q;
        //  int n, k;
        //  cin>>n;

        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        // Invoking object of Geeks class
        Solution obj;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            int k = a[i];
            obj.enqueue(q, k);
        }

        int m = b.size();
        for (int i = 0; i < m; i++) {
            int k = b[i];
            int f = obj.findFrequency(q, k);
            if (f != 0) {
                cout << f << endl;
            } else {
                cout << "-1\n";
            }
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends