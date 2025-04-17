//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

void sortArray(int a[], char b[], int n) {

    // code here
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
                char tem=b[j];
                b[j]=b[j+1];
                b[j+1]=tem;
            }
        }
    }
    
}



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        char b[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sortArray(a, b, n);
        for (auto it : b)
            cout << it << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends