class Solution{
  public:
    stack<int> insertIntoStack(int n, int arr[]){
        //Your code here
        stack<int>s;
        for(int i=0; i<n; i++)
            s.push(arr[i]);
        return s;
    }

};
