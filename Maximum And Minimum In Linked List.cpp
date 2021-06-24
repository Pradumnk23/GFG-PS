/*
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

int maximum(Node *head)
{
    //Your code here
    int maxm=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        maxm=max(maxm,curr->data);
        curr=curr->next;
    }
    return maxm;
}

int minimum(Node *head)
{
    //Your code here
    int minm=INT_MAX;
    Node *curr=head;
    while(curr!=NULL)
    {
        minm=min(minm,curr->data);
        curr=curr->next;
    }
    return minm;
}
