def deleteHead(head):
    #code here
    if head == None:
        return None
    elif head.next == head:
        return None
    else:
        head.data = head.next.data
        head.next = head.next.next
        return head
  
  # c++
  
  Node * deleteHead(Node *head)
{
   //Your code here
    if(head==NULL)
        return NULL;
    if(head->next==head)
    {
        delete(head);
        return NULL;
    }
    head->data=head->next->data;
    Node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
} 
