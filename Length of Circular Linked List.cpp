int getLength(Node * head)
{
    //Your code here
    int cnt=0;
    Node *curr=head;
    do{
        cnt++;
        curr=curr->next;
    }while(curr!=head);
    return cnt;
}
