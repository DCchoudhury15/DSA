/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        if(head==NULL){
            return NULL;
        }
        Node* temp=head;
        int i=0;
        while(temp && i<p){
            temp=temp->next;
            i++;
        }
        Node *nextNode=temp->next;
        Node *newNode=new Node(x);
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next=nextNode;
        if(nextNode)
        nextNode->prev=newNode;
        return head;
    }
};