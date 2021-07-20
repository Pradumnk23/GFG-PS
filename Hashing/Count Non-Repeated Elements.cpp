class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
            mp[arr[i]]++;
        for(auto i:mp)
        {
            if(i.second==1)
                cnt++;
        }
        return cnt;
    }

};
