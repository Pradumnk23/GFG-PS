Node* insertInMiddle(Node* head, int x)
{
    int cnt=0;
    Node *temp=new Node(x);
    Node *curr=head;
    while(curr!=NULL)
        {cnt++;curr = curr->next;}
    int m=(cnt+1)/2;
    curr=head;
    while(m-->1)
    {
        curr=curr->next;
    }
    temp->next=curr->next; // maintain order, else connection will cut 
    curr->next=temp;
    return head;
}
