Node *insertInTail(Node * head, int x)
{
    //Your code here
    Node *temp=new Node(x);
    if(head==NULL)
        temp->next=temp;
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
    }
    return temp;
}
