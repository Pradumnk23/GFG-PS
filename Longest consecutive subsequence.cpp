class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nums[], int N)
    {
        set<int> h;
        for(int i=0; i<N; i++)
            h.insert(nums[i]);
        int res=0;
        for(int i=0; i<N; i++)
        {
            if(!h.count(nums[i]-1))
            {
                int curr=1, cnum=nums[i];
                while(h.count(cnum+1))
                {
                    curr++;
                    cnum++;
                }
                res=max(res,curr);
            }
        }
        return res;
    }
};
