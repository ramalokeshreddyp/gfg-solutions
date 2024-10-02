//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x)
        : data(x)
        , next(nullptr) {}
};

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}


// } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        
        set<int>s1;
        set<int>s2;
        Node *temp=head1;
        while(temp!=NULL){
            s1.insert(temp->data);
            temp=temp->next;
        }
        temp=head2;
        while(temp!=NULL){
            s2.insert(temp->data);
            temp=temp->next;
        }
        
        vector<int>res;
        temp = head1;

        
        while (temp != NULL) {
            if (s1.find(temp->data) != s1.end() && s2.find(temp->data) != s2.end()) {
                res.push_back(temp->data);
                s2.erase(temp->data); 
            }
            temp = temp->next;
        }
     Node *head=NULL;
        temp=NULL;
        for(int i=0;i<res.size();i++){
            Node *newnode=(Node *)malloc(sizeof(Node));
            newnode->data=res[i];
            newnode->next=NULL;
            if(head==NULL){
                head=temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=newnode;
            }
        }
        return head;
    }
};

//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        Node *head1 = nullptr, *tail1 = nullptr;
        Node *head2 = nullptr, *tail2 = nullptr;
        int tmp;
        string input1, input2;

        getline(cin, input1);
        stringstream ss1(input1);
        while (ss1 >> tmp) {
            Node* new_node = new Node(tmp);
            if (!head1) {
                head1 = new_node;
                tail1 = new_node;
            } else {
                tail1->next = new_node;
                tail1 = new_node;
            }
        }

        getline(cin, input2);
        stringstream ss2(input2);
        while (ss2 >> tmp) {
            Node* new_node = new Node(tmp);
            if (!head2) {
                head2 = new_node;
                tail2 = new_node;
            } else {
                tail2->next = new_node;
                tail2 = new_node;
            }
        }

        Solution obj;
        Node* result = obj.findIntersection(head1, head2);
        printList(result);
    }
    return 0;
}

// } Driver Code Ends