class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    int circularSubarraySum(int arr[], int num)
    {
        int s=0;
        for(int i=0; i<num; i++)
            s+=arr[i];
        int res=arr[0];
        int resmin=arr[0];
        int maxm=arr[0];
        int minm=arr[0];
        for(int i=1; i<num; i++)
        {
            maxm=max(maxm+arr[i],arr[i]);
            minm=min(minm+arr[i],arr[i]);
            res=max(res,maxm);
            resmin=min(resmin,minm);
        }
        int ans=max((s-resmin),res);
        if(res<0)
            return res;
        return ans;
    }
};
