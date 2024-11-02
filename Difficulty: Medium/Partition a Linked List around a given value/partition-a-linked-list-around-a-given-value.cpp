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

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution {
  public:
    struct Node* partition(struct Node* head, int x) {
        // code here
        struct Node *temp=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
         stable_partition(v.begin(),v.end(),[x](int num){ return num==x;});
        stable_partition(v.begin(),v.end(),[x](int num){ return num<x;});
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->data=v[i++];
            temp=temp->next;
        }
        return head;
        
    }
};

//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        // Solution ob;
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

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int x;
        cin >> x;
        cin.ignore();
        Solution ob;
        head = ob.partition(head, x);
        printList(head);
    }

    return (0);
}

// } Driver Code Ends