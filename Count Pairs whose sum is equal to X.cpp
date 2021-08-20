class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        int cnt=0;
        unordered_set<int>st;
        while(head1)
        {
            st.insert(head1->data);
            head1=head1->next;
        }
        while(head2)
        {
            if(st.find(x-head2->data)!=st.end())
                cnt++;
            head2=head2->next;
        }
        return cnt;
    }
};
