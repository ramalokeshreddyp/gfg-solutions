//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* A linked list node */
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void insert(Node*& start, const vector<int>& arr) {
    Node* temp;
    for (int i = 0; i < arr.size(); i++) {
        if (i == 0) {
            start = new Node(arr[i]);
            temp = start;
        } else {
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
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
#include<bits/stdc++.h>
class Solution {
  public:
    void rearrange(Node* head) {
        // add code here
        vector<int>v;
        vector<int>v1;
        int i=1;
        Node *temp=head;
        while(temp!=NULL){
            if(i%2==0){
                v.push_back(temp->data);
            }
            else{
                v1.push_back(temp->data);
            }
            i++;
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        temp=head;
         i=0;
        while(i<v1.size()&&temp!=NULL){
           temp->data=v1[i++];
            temp=temp->next;
        }
        i=0;
        while(i<v.size()&&temp!=NULL){
           temp->data=v[i++];
            temp=temp->next;
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // Ignore newline after t input

    while (t--) {
        vector<int> arr;
        string input;

        // Read the array of linked list elements
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* start = NULL;
        insert(start, arr);

        Solution ob;
        ob.rearrange(start);
        printList(start);

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends