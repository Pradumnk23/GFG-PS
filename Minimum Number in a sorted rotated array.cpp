int minNumber(int arr[], int low, int high)
{
    // Your code here
    //low=0,high=n-1;
    while(low<high)
    {
        int m=(low+high)/2;
        if(arr[m]>arr[high])
            low=m+1;
        else
            high=m;
    }
    return arr[low];
}
