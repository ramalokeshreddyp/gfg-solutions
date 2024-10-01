//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node *temp=head;
        deque<int>dq;
        while(temp!=NULL){
            dq.push_back(temp->data);
            temp=temp->next;
        }
        int last=dq.back();
        dq.pop_back();
        temp=head;
        temp->data=last;
        temp=temp->next;
        while(temp!=NULL){
            temp->data=dq.front();
            dq.pop_front();
            temp=temp->next;
        }
        return head;
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
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }
        Solution ob;
        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        head = ob.moveToFront(head);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends