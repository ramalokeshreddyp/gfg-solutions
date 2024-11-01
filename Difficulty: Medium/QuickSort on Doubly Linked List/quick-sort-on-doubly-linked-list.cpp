//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// a node of the doubly linked list
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to insert a node at the end of the Doubly Linked List
void push(DLLNode **headRef, DLLNode **tailRef, int new_data) {
    // allocate node
    DLLNode *newNode = new DLLNode(new_data);

    // since we are adding at the end, next is NULL
    newNode->next = NULL;

    // change next of tail node to new node
    if ((*tailRef) != NULL) {
        newNode->prev = (*tailRef);
        (*tailRef)->next = newNode;
    } else {
        // if the list is empty
        (*headRef) = newNode;
        newNode->prev = NULL;
    }

    (*tailRef) = newNode;
}

// Function to print nodes in a given doubly linked list
void printList(DLLNode *head) {
    // if list is empty
    if (head == NULL)
        return;

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}


// } Driver Code Ends
/* a Node of the doubly linked list */

/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    DLLNode* quickSort(DLLNode* head) {
        // Your code goes here
         DLLNode *temp=head;
        multiset<int>ms;
        while(temp!=NULL){
            ms.insert(temp->data);
            temp=temp->next;
        }
        vector<int>res(ms.begin(),ms.end());
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->data=res[i++];
            temp=temp->next;
        }
        return head;
    }
};

//{ Driver Code Starts.

// Driver code
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

        DLLNode *head = nullptr, *tail = nullptr;
        for (int i = 0; i < arr.size(); i++) {
            push(&head, &tail, arr[i]);
        }

        Solution obj;
        head = obj.quickSort(head);
        printList(head);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends