//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function Template for C++

/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* insertionSort(struct Node* head_ref) {
        // code here
        struct Node* temp=head_ref;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        temp=head_ref;
       int  i=0;
        while(temp!=NULL){
            temp->data=v[i++];
            temp=temp->next;
        }
        return head_ref;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }
        Node *head = nullptr;
        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node *tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        Solution obj;
        Node *ans = obj.insertionSort(head);
        printList(ans);
    }
    return 0;
}
// } Driver Code Ends