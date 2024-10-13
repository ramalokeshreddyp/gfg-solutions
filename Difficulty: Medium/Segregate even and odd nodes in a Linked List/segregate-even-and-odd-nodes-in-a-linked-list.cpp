//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
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
// User function template for C++

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
 #include <vector>
#include <algorithm>  
class Solution {
    
 

public:
    Node* divide(Node* head) {
        Node *temp = head;
        vector<int> v;
        
        
        while (temp != NULL) {
            v.push_back(temp->data);
            temp = temp->next;
        }
        
       
        stable_partition(v.begin(), v.end(), [](int num) { return num % 2 == 0; });
        
      
        int i = 0;
        temp = head;
        while (temp != NULL) {
            temp->data = v[i++];
            temp = temp->next;
        }
        
        return head;
    }

};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty())
            continue;

        int data = arr[0];
        int N = arr.size();
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 1; i < N; ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        Node *ans = ob.divide(head);
        printList(ans);
    }
    return 0;
}

// } Driver Code Ends