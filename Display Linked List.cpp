struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};

*/

vector<int> displayList(Node *head)
{
    vector<int> v;
    Node *curr=head;
    while(curr != NULL)
    {
        v.push_back(curr->data);
        curr = curr->next;
    }
    return v;
}
