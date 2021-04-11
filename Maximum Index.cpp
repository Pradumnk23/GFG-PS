class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
        int l=0,h=n-1,maxm=0;
        while(l<=h)
        {
            if(arr[l]<=arr[h])
            {
                maxm=max(maxm,h-l);
                l++;
                h=n-1;
            }
            else
                h--;
        }
        return maxm;
    }
};
