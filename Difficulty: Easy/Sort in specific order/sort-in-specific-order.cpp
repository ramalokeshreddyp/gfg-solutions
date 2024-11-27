//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
        sort(arr.begin(),arr.end());
        stable_partition(arr.begin(),arr.end(),[](int x){return x%2!=0;});
        int odd_count=std::count_if(arr.begin(),arr.end(),[](int x){return
        x%2!=0;});
        reverse(arr.begin(),arr.begin()+odd_count);
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.sortIt(arr);

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends