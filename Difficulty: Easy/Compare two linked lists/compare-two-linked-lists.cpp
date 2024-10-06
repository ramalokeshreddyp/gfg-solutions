//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};
*/

// Compare two strings represented as linked lists
class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        // Code Here
        Node *temp=head1;
        int c1=0,c2=0;
        while(temp!=NULL){
            c1++;
            temp=temp->next;
        }
        temp=head2;
        while(temp!=NULL){
            c2++;
            temp=temp->next;
        }
        if(c1>c2){
            return 1;
        }
        if(c2>c1){
            return -1;
        }
    temp=head1;
    Node *temp1=head2;
    int i=1,j=0,k=0;
    while(i<=c1){
        if(temp->data!=temp1->data){
        if(temp->data>temp1->data){
            return 1;
        }
        else{
            return -1;
        }
        }
        temp=temp->next;
        temp1=temp1->next;
        i++;
    }
    return 0;
        }
    };

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after reading integer

    while (t--) {
        Node *list1 = NULL, *list2 = NULL;
        string line;

        // Read first list
        getline(cin, line);
        istringstream iss1(line);
        char x;
        iss1 >> x;
        Node *temp1 = new Node(x);
        list1 = temp1;
        Node *current1 = temp1;

        while (iss1 >> x) {
            Node *newNode = new Node(x);
            current1->next = newNode;
            current1 = newNode;
        }

        // Read second list
        getline(cin, line);
        istringstream iss2(line);
        iss2 >> x;
        Node *temp2 = new Node(x);
        list2 = temp2;
        Node *current2 = temp2;

        while (iss2 >> x) {
            Node *newNode = new Node(x);
            current2->next = newNode;
            current2 = newNode;
        }

        // Compare lists
        Solution obj;
        cout << obj.compare(list1, list2) << endl;

        // Clean up memory
        Node *tmp;
        while (list1 != NULL) {
            tmp = list1;
            list1 = list1->next;
            delete tmp;
        }
        while (list2 != NULL) {
            tmp = list2;
            list2 = list2->next;
            delete tmp;
        }
    }

    return 0;
}

// } Driver Code Ends