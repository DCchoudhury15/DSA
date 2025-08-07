/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* node) {
        // code here
         if (node == nullptr)
        return 0;
    
    // Find the size of left and right 
    // subtree.
    int left = getSize(node->left);
    int right = getSize(node->right);
    
    // return the size of curr subtree.
    return left+right+1;
    }
};