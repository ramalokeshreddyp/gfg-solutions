//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        unordered_map<int,int>mpp;
        struct Node*temp=head;
        while(temp!=NULL){
            mpp[temp->data]++;
            temp=temp->next;
        }
        Node *newhead=NULL;
        Node *newtail=NULL;
        temp=head;
        while(temp!=NULL){
            if(mpp[temp->data]==1){
                Node *newnode=new Node(temp->data);
                if(newhead==NULL){
                    newhead=newtail=newnode;
                }
                else{
                    newtail->next=newnode;
                    newtail=newnode;
                }
            }
            temp=temp->next;
        }
        return newhead;
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends