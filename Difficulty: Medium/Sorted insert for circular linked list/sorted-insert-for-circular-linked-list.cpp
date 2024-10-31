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

void printList(Node *head) {
    if (head == NULL)
        return;

    Node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << "\n";
}


// } Driver Code Ends
/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }

};
 */

// This function should return head of
// the modified list
class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // Your code here
        multiset<int>ms;
        Node *temp=head;
        do{
            ms.insert(temp->data);
            temp=temp->next;
        }while(temp!=head);
        ms.insert(data);
        vector<int>res(ms.begin(),ms.end());
        Node *headd=NULL;
        temp=NULL;
        for(int i=0;i<res.size();i++){
            Node *newnode=(Node *)malloc(sizeof(Node));
            newnode->data=res[i];
            newnode->next=NULL;
            if(headd==NULL){
                headd=temp=newnode;
                temp->next=newnode;
            }
            else{
                newnode->next=headd;
                temp->next=newnode;
                temp=newnode;
            }
        }
        return headd;
        
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
        int x;
        cin >> x;
        cin.ignore();
        Node *head = new Node(arr[0]);
        Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        tail->next = head; // Make it circular
        Solution ob;
        Node *ans = ob.sortedInsert(head, x);
        printList(ans);
    }
    return 0;
}
// } Driver Code Ends