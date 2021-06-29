Node *insertInHead(Node * head, int x)
{
    //Your code here
    Node *temp=new Node(x);
    if(head==NULL)
        temp->next=temp;
    else
    {
        Node *curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
    }
    return temp;
        
}
