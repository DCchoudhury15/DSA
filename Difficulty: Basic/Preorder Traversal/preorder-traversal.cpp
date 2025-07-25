/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
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

    // Function to return a list containing the preorder traversal of the tree.
    vector<int> preorder(Node* root) {
        // write code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
            ans.push_back(root->data);
            vector<int> leftPart = preorder(root->left);   
        vector<int> rightPart = preorder(root->right);  
         ans.insert(ans.end(), leftPart.begin(), leftPart.end());
        ans.insert(ans.end(), rightPart.begin(), rightPart.end());

        return ans;
        
    }
};