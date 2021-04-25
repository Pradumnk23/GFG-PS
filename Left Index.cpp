int leftIndex(int N, int arr[], int X){
    int l=0,h=N-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(X<arr[mid])
            h=mid-1;
        else if(X>arr[mid])
            l=mid+1;
        else
        {
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;
            else
                h=mid-1;
        }
    }
    return -1;
    
}
