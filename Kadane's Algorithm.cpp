class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int res=arr[0];
        int maxm=arr[0];
        for(int i=1; i<n; i++)
        {
            maxm=max(maxm+arr[i],arr[i]);
            res=max(res,maxm);
        }
        return res;
    }
};
