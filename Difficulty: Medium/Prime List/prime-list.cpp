//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        return true;
    }

    int findNearestPrime(int n) {
        if (isPrime(n)) return n;

        int lower = n - 1;
        int upper = n + 1;

        while (true) {
            bool foundLower = false;
            if (lower >= 2 && isPrime(lower)) {
                foundLower = true;
            }

            bool foundUpper = false;
            if (isPrime(upper)) {
                foundUpper = true;
            }

            if (foundLower && foundUpper) {
                if (n - lower < upper - n) {
                    return lower;
                } else if (n - lower > upper - n) {
                    return upper;
                } else {
                    return lower;
                }
            } else if (foundLower) {
                return lower;
            } else if (foundUpper) {
                return upper;
            }
            lower--;
            upper++;
        }
    }

    Node *primeList(Node *head) {
        Node *current = head;
        while (current != nullptr) {
            current->val = findNearestPrime(current->val);
            current = current->next;
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

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends