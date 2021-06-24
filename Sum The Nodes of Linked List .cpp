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

int sumOfElements(Node *head)
{
   //Your code here
   int s=0;
    Node *curr=head;
    while(curr != NULL)
    {
        s+=curr->data;
        curr=curr->next;
    }
    return s;
}
