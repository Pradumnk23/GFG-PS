Node *insertInTail(Node * head, int data)
{
   //Your code here
    Node *temp=new Node(data);
    if(head==NULL)
        return temp;
    Node *curr=head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=temp;
    temp->prev=curr;
    return head;
}
