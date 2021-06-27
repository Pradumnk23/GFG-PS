bool isCircular(Node *head)
{
    if(head==NULL)
        return true;
    Node *curr=head;
    while(curr&&curr->next!=head)
        curr=curr->next;
    if(!curr||!(curr->next))
        return false;
    return true;
}
