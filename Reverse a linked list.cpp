class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        Node *rh=reverseList(head->next);
        Node *rt=head->next;
        rt->next=head;
        head->next=NULL;
        return rh;
    }
    
};
    
