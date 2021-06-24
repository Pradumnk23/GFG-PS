class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        
        struct Node *temp=new Node(x);

        if(head==NULL)
        {
            head=temp;
            return head;
        }

        else
        {
            temp->next=head;
            head=temp;
        }

        return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        
        struct Node *temp=head;
        struct Node *temp2=new Node(x);

        if(head==NULL)
        {
            head=temp2;
            return head;
        }
        else
        {
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=temp2;
            return head;
        }
    }
};
