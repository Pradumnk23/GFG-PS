void insert(stack<int> &s,int x)
{
    //Your code here
    s.push(x);
}

//Function to remove top element from stack.
void remove(stack<int> &s)
{
    s.pop();
    //Your code here
}

//Function to print the top element of stack.
void headOf_Stack(stack<int> &s)
{
    int x=s.top();//Your code here
    cout<<x<<" "<<endl; 
}

//Function to search an element in the stack.
bool find(stack<int> s, int val)
{
    while (!s.empty()) {
        if (s.top() == val) return true;
        s.pop();
    }
    return false;
}
