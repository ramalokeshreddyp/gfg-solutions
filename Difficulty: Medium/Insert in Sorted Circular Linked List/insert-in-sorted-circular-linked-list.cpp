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
