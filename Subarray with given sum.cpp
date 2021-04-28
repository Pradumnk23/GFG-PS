vector<int> subarraySum(int arr[], int n, int s){
    
    int l = 0;
    int r = 0;
    int sum = 0;
    vector<int> v;
    
    while (r<=n) {
        if (count == s) {
            v.push_back(l+1);
            v.push_back(r);
            return v;
        }
        if (l==r || sum < s) {
            r++;
            sum += arr[r-1];
        }
        else {
            l++;
            sum -= arr[l-1];
        }
    }
    
    v.push_back(-1);
    return v;
    // Your code here
    
}
