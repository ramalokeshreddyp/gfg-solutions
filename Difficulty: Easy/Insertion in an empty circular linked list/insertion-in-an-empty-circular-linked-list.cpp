//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:

    Node* insertInEmptyList(Node* last, int data) {
        // code here
        if (last != nullptr) return last;
        last=new Node(data);
      
        last->next=last;
        return last;
    }
};



//{ Driver Code Starts.

void printList(Node* last) {
    if (last == nullptr)
        return;

    Node* head = last;
    while (true) {
        cout << head->data << " ";
        if (head->next == head)
            break;
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        Solution obj;
        Node* last = nullptr;
        int n;

        cin >> n;

        last = obj.insertInEmptyList(last, n);

        printList(last);
    }

    return 0;
}

// } Driver Code Ends