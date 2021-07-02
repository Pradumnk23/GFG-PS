Node *insertInHead(Node * head, int data)
{
    Node *temp=new Node(data);
    temp->next=head;
    if(head!=NULL)
        head->prev=temp;
    return temp;
}
