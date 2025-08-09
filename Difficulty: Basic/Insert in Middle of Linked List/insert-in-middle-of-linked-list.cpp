/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        Node* newNode=new Node(x);
        if(head==NULL)
        return newNode;
        Node* temp=head;
        int length=0;
        while(temp){
            length++;
            temp=temp->next;
        }
        if(length==1){
            head->next=newNode;
            return head;
        }
        int m=(length-1)/2;
        Node* prev=head;
        for(int i=0; i<m; i++){
            prev=prev->next;
        }
        newNode->next=prev->next;
        prev->next=newNode;
        return head;
    }
};