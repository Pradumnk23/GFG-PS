void recurrsion(Node* root, int level, vector<int>&v)
{
    if(root==NULL)
        return;
    if(v.size()==level)
        v.push_back(root->data);
    recurrsion(root->left,level+1,v);
    recurrsion(root->right,level+1,v);
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    // Your code here
    vector<int>v;
    recurrsion(root, 0,v);
    return v;
   
}
