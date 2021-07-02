void addNode(Node *head, int pos, int data)
{
   // Your code here
    /*Node *temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    Node *curr=head;
    for(int i=0; i<pos; i++)
        curr=curr->next;
    if(curr->next==NULL)
    {
        curr->next=temp;
        temp->prev=curr;
    }
    else
    {
        curr->next->prev=temp;
        temp->next=curr->next;
        temp->prev=curr;
        curr->next=temp;
    }*/
    Node *temp=new Node(data);
    Node *curr=head;
    int cnt=0;
    while(cnt!=pos && curr->next!=NULL)
        {curr=curr->next;cnt++;}
    temp->prev=curr;
    temp->next=curr->next;
    curr->next=temp;
}
