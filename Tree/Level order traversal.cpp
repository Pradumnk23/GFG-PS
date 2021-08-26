class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        //Your code here
        vector<int>v;
        if(node==NULL)
            return v;
        queue<Node*>q;
        q.push(node);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v2;
            for(int i=0; i<n; i++)
            {
                Node *node2=q.front();
                q.pop();
                if(node2->left!=NULL)
                    q.push(node2->left);
                if(node2->right!=NULL)
                    q.push(node2->right);
                v.push_back(node2->data);
            }
        }
        return v;
      
    }
};
