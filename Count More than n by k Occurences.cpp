class Solution{
  public:
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int rem=n/k;
        sort(arr, arr+n);
        int ans=0, cnt=1;
        for(int i=1;i<=n;i++){
            if (arr[i]==arr[i-1])
                cnt++;
            if (arr[i]!=arr[i-1] || arr[i]==arr[n]){
                if (cnt>rem)
                    ans++;
            cnt=1;
            }
        }
    return ans;
    }
};
