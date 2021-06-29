int getsize(Node *k, Node * head)  //changed this size function for circular linked list
{
    if(k==head)
    {
        return 1;
    }
    return getsize(k->next,head)+1;
}

void insertAtPosition(Node *head, int pos, int data)
{
    int s=getsize(head->next, head);
    Node *temp=new Node(data);
   
    if(pos>s)
        return;
    else
    {
        Node *p=head;
       Node *curr=head;
       int i=1;
       while(i<=pos)
       {
           p=curr;
           curr=curr->next;
           i++;
       }
       p->next=temp;
       temp->next=curr;
    }
}

