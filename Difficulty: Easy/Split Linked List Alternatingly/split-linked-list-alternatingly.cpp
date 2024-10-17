//{ Driver Code Starts
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


// } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        Node *temp=head;
        vector<int>v1;
        vector<int>v2;
        int i=1;
        while(temp!=NULL){
            if(i%2==0){
                v2.push_back(temp->data);
            }
            else{
                v1.push_back(temp->data);
            }
            temp=temp->next;
            i++;
        }
        Node *head1=NULL,*head2=NULL;
        temp=NULL;
        for(int i=0;i<v1.size();i++){
            Node *newnode=(Node *)malloc(sizeof(Node));
            newnode->data=v1[i];
            newnode->next=NULL;
            if(head1==NULL){
                temp=head1=newnode;
            }else{
                temp->next=newnode;
                temp=newnode;
            }
        }
        temp=NULL;
         for(int i=0;i<v2.size();i++){
            Node *newnode=(Node *)malloc(sizeof(Node));
            newnode->data=v2[i];
            newnode->next=NULL;
            if(head2==NULL){
                temp=head2=newnode;
            }else{
                temp->next=newnode;
                temp=newnode;
            }
        }
        vector<Node *>v;
        v.push_back(head1);
        v.push_back(head2);
        return v;
    }
};


//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

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

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends