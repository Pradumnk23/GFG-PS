void insertAtPosition(Node *head, int pos, int data)
{
    //Your code here
    Node *temp=new Node(data);
    int cnt=0;
    Node *curr=head;
    while(curr!=NULL)
    {cnt++;curr=curr->next;}
    curr=head;
    cnt=1;
    if(pos<=cnt)
    {
        while(cnt!=pos)
            {curr=curr->next;cnt++;}
        temp->next=curr->next;
        curr->next=temp;
    }
}
