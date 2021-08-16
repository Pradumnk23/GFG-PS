void push(int data)
{
    //Your code here
    if(top>=100000)
    {
        cout<<"Stack Full";
        return;
    }
    stack[++top]=data;
    return;
}
//Function to pop the topmost data
void pop()
{
    //Your code here
    if(top<0)
    {
        cout<<"Stack Empty"<<endl;
        return;
    }
    top--;
    return;
}
//Function to display the stack from index 0 
void display()
{
    //Your code here
    if(top<0){
        cout<<"-1"<<endl;
        return;
    }
    else
    for(int i=0;i<=top;i++){
    cout<<stack[i]<<" ";
    }
    cout<<endl;
    return;

}
