class Solution{
    public:
    
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) { 
        int temp=0;
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            if(arr[i]==temp+1)
                temp++;
        }
        return temp+1;
        
    } 
};
