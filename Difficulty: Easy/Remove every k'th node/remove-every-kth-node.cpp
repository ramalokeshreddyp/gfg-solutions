//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

/* Link list Node */
struct Node {
    int data;
    Node* next;

    Node(int x)
        : data(x)
        , next(NULL) {}
};

void append(Node*& head, Node*& tail, int new_data) {
    Node* new_node = new Node(new_data);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}


// } Driver Code Ends
/* Link list Node

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
         if (!head || k <= 0) return head;

    vector<int> v;
    Node* temp = head;

    
    while (temp != NULL) {
        v.push_back(temp->data);
        temp = temp->next;
    }


    for (int i = k - 1; i < v.size(); i += (k - 1)) {
        v.erase(v.begin() + i);
        //i--;  
    }

   
    Node* newHead = NULL;
    Node* current = NULL;

    for (int i = 0; i < v.size(); i++) {
        Node* newNode = new Node(v[i]);

        if (newHead == NULL) {
            newHead = current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    return newHead;
    }
};


//{ Driver Code Starts.
/* Driver program to test above function */
int main() {

    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        Node* head = new Node(arr[0]);
        Node* tail = head;

        for (size_t i = 1; i < arr.size(); i++) {
            append(head, tail, arr[i]);
        }

        int K;
        cin >> K;
        cin.ignore(); // Ignore the newline after reading K

        Solution obj;
        Node* res = obj.deleteK(head, K);
        Node* temp = res;

        if (res == NULL) {
            cout << -1 << endl;
        } else {
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    return 0;
}

// } Driver Code Ends