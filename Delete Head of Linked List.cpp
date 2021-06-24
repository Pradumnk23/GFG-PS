Node * deleteHead(Node *head)
{
    //Your code here
    if(head==NULL)
        return NULL;
    Node *curr=head->next;
    delete head;
    return curr;
}
