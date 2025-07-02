/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to check if two linked lists are identical
    bool areIdentical(struct Node *head1, struct Node *head2) {
        // code here
     
       while(head1 && head2 ){
           if(head1->data==head2->data){
               head1=head1->next;
               head2=head2->next;
           }else{
               return false;
           }
       }
       return true;
       };
        
    
};