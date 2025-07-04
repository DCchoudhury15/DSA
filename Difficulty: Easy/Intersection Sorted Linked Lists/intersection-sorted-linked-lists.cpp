/* The structure of the Linked list Node is as follows:

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
           Node* dummy = new Node(0);
        Node* tail = dummy;
        Node *temp1 = head1;
        Node *temp2 = head2;
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->data == temp2->data) {
                tail->next = new Node(temp1->data); 
                tail = tail->next;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else if (temp1->data < temp2->data) {
                temp1 = temp1->next;
            }
            else {
                temp2 = temp2->next;
            }
        }
        return dummy->next; 
    
    }
};