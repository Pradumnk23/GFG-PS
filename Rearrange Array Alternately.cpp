class Solution{
    public:
    
    void rearrange(long long *arr, int n) 
    { 
    	vector<int> v;
        sort(arr,arr+n);
        int i=0,j=n-1;
        while(i<j)
        {
            v.push_back(arr[j--]);
            v.push_back(arr[i++]);
            
        }
        if(i==j)
        {
            v.push_back(arr[i]);
        }
        for(int i=0;i<v.size();i++)
        {
            arr[i]=v.at(i);
        }
    	 
    }
};
