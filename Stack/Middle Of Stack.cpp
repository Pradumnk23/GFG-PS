class Solution{
    public:
    int stackMiddle(int n, stack<int> st)
    {
        int i=0;
        while(i!=n/2)
        {
            st.pop();
            i++;
            
        }
        return st.top();
    }
};
