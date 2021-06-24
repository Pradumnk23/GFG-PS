Node * deleteTail(Node *head)
{
    //Your Code here
    struct Node *curr=head;
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    while(curr->next->next!=NULL)
        curr=curr->next;
    delete(curr->next);
    curr->next=NULL;
    return head;
}
