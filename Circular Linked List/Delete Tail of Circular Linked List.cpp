Node * deleteTail(Node * head)
{
    //Your code here
    /*if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }*/
    Node *curr=head;
    while(curr->next->next!=head)
        curr=curr->next;
    delete curr->next;
    curr->next=head;
    return head;
}
