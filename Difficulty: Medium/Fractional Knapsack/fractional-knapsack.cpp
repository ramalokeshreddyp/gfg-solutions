//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
  
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& values, vector<int>& weights, int w) {
        // Your code here
        int n = values.size();
    vector<pair<int, int>> items;  

   
    for (int i = 0; i < n; i++) {
        items.push_back({values[i], weights[i]});
    }

    
    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;  

   
    for (int i = 0; i < n; i++) {
        if (items[i].second <= w) {
            
            w -= items[i].second;         
            totalValue += items[i].first; 
        } else {
           
            totalValue += (double)items[i].first * ((double)w / items[i].second);
            break;  
        }
    }

    return totalValue;  
    }
   static  bool cmp(pair<int, int> a, pair<int, int> b) {
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;
    return r1 > r2;  
}
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
    }
    return 0;
}

// } Driver Code Ends