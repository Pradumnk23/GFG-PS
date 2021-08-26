class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inorder(Node *node, vector<int>&v)
    {
        if(node==NULL)
            return;
        inorder(node->left,v);
        v.push_back(node->data);
        inorder(node->right,v);
        
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>v;
        inorder(root,v);
        return v;
        
    }
};
