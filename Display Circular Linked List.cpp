vector<int> displayList(Node *head)
{
    vector<int>v;
    if(head==NULL)
        return v;
    Node *curr=head;
    do{
        v.push_back(curr->data);
        curr=curr->next;
    }
    while(curr!=head);
    return v;
}
